//importing required header files
#include "pch.h"
#include "imga.h"
//function to open the file path and populate the image array
void imga::openfile(Mat image[], ifstream& in)
{
    //for loop run=s till the number of images mentioned at the start of the meta file
	for (int i = 0; i < getcount(); i++)
	{
		string file_path;
		in >> file_path;
        //image is read and stored
		image[i] = imread(file_path, 0);

	}
}
//save individual files for eaach output from change of brightness and contrast
void imga::savefiles_bc(Mat new_image[])
{
	for (int i = 0; i < getcount(); i++)
	{
		//imwrite saves the image at the specified directory
        imwrite(format("Output//B&C//%05d_Output_Brightness_Contrast.png", i), new_image[i]);
	}
}
//save individual files for each output from the medain filter function
void imga::savefiles_mf(Mat Med_image[])
{
	for (int i = 0; i < getcount(); i++)
	{
        //imwrite saves the image at the specified directory
		imwrite(format("Output//MF//%05d_Output_Median_3.png", i), Med_image[i]);
	}
}

//simple function to get the median value in a 1D array of size k*k, where k is the kernal size
double imga::getMedian(double* window, int k)
{
	int size = k * k;
    //std library sort function
	std::sort(window, window + size);
	return window[size/2];
}
//median blur function with variable kernal size
void imga::medianBlur_dyn(Mat image[], Mat Med_image[], int k)
{
    //for loop to iterate through the images in the array
	for (int s = 0; s < getcount(); s++)
	{
        //initialising the image object Med_image with zeros
		Med_image[s] = Mat::zeros(Med_image[s].size(), Med_image[s].type());
        //for loop to parse through each element of the image
        //satrting from k/2 to compensate for the kernal size
		for (int i = k/2; i < image[s].rows - (k/2) - 1; i++)
		{
			for (int j = k/2; j < image[s].cols - (k/2) - 1; j++)
			{
                //creating a temp 1D array to sort and find median value
				double* cur_window = new double[k*k];
                //variable to move through the iD array fro each new element from the image
				int d = 0;
                //creating the kernal from the image for each cell
                //for loop from -k/2 to k/2 to populate the kernal
				for (int m = -k / 2; m < k / 2; m++)
				{
					for (int n = -k / 2; n < k / 2; n++)
					{
						cur_window[d] = image[s].at<uchar>(i + m, j + n);
                        //index for cur_window is updated to move to the next element
						d++;
					}
				}
                //median value is set to the new image
				Med_image[s].at<uchar>(i, j) = getMedian(cur_window, k);
			}
		}
	}
    //creating a single image out of multiple image and into the same window to update as value changes
	Mat win_mat(Size(image[0].rows * 2, image[0].cols * getcount()), image[0].type());
	for (int i = 0; i < getcount(); i++)
	{
		image[i].copyTo(win_mat(Rect(0, i * image[i].cols, image[i].rows, image[i].cols)));
		Med_image[i].copyTo(win_mat(Rect(Med_image[i].rows, i * Med_image[i].cols, Med_image[i].rows, Med_image[i].cols)));
		namedWindow("All Original Images & Median Blur Applied Images", 1);
		cv::imshow("All Original Images & Median Blur Applied Images", win_mat);
		imwrite("Output//Median_Blur_Dynamic_Combined_Output.png", win_mat);
	}
	
}
//median blur function for kernal size 3
void imga::medianBlur_3(Mat image[], Mat Med_image[])
{

	for (int s = 0; s < getcount(); s++)
	{
		Med_image[s] = Mat::zeros(image[s].size(), image[s].type());
		for (int i = 1; i < image[s].rows - 1; i++)
		{
			for (int j = 1; j < image[s].rows - 1; j++)
			{
				double cur_window[9];
                //cur_wndow created manually raher than adjusting for the size of the kernal
				cur_window[0] = image[s].at<uchar>(i - 1, j - 1);
				cur_window[1] = image[s].at<uchar>(i - 1, j);
				cur_window[2] = image[s].at<uchar>(i - 1, j + 1);
				cur_window[3] = image[s].at<uchar>(i, j - 1);
				cur_window[4] = image[s].at<uchar>(i, j);
				cur_window[5] = image[s].at<uchar>(i, j + 1);
				cur_window[6] = image[s].at<uchar>(i + 1, j - 1);
				cur_window[7] = image[s].at<uchar>(i + 1, j);
				cur_window[8] = image[s].at<uchar>(i + 1, j + 1);
				Med_image[s].at<uchar>(i, j) = getMedian(cur_window,3);
			}
		}
	}
    //conbining the images into one
	Mat win_mat(Size(image[0].rows * 2, image[0].cols * getcount()), image[0].type());
	for (int i = 0; i < getcount(); i++)
	{
		image[i].copyTo(win_mat(Rect(0, i * image[i].cols, image[i].rows, image[i].cols)));
		Med_image[i].copyTo(win_mat(Rect(Med_image[i].rows, i * Med_image[i].cols, Med_image[i].rows, Med_image[i].cols)));
		namedWindow("All Original Images & Median Blur Applied Images", 1);
		cv::imshow("All Original Images & Median Blur Applied Images", win_mat);
		imwrite("Output//Median_Blur_3_Combined_Output.png", win_mat);
	}
}
//function to apply brightness and contrast value
void imga::setvalues(Mat image[], Mat new_image[], double b, double c)
{
    //for loop to iterate through the images
	for (int i = 0; i < getcount(); i++)
	{
		//converting to scale of 3.0 from 100 input
        //converstion is required to control the contrast value, else the diffrence between high and low valuies is too big
        //input is maintained as 100 to introduce some granularity to contrast value. else there is only 3 vaklues for contrast which is not sufficient for practical reasons
		double alpha = (c * 3) / 100;
		double beta = b;
		new_image[i] = Mat::zeros(image[i].size(), image[i].type());
		for (int x = 0; x < image[i].rows; x++) {
			for (int y = 0; y < image[i].cols; y++) {
				new_image[i].at<uchar>(x, y) = (alpha * image[i].at<uchar>(x, y) + beta);

			}
		}
	}
    //again combining the imnages into one for the output
	Mat win_mat(Size(image[0].rows * 2, image[0].cols * getcount()), image[0].type());
	for (int i = 0; i < getcount(); i++)
	{
		image[i].copyTo(win_mat(Rect(0, i*image[i].cols, image[i].rows, image[i].cols)));
		new_image[i].copyTo(win_mat(Rect(image[i].rows, i*image[i].cols, image[i].rows, image[i].cols)));
		namedWindow("All Original Image & Edited Image", 1);
		cv::imshow("All Original Image & Edited Image", win_mat);
        //writing the conbined image
		imwrite("Output//Edited_Combined_Output.png", win_mat);

	}


}
//accesors and mutators for the private variables
void imga::setcount(int count)
{
	file_count = count;
}
string imga::getmeta()
{
	return meta_file_path;
}
int imga::getcount()
{
	return file_count;
}
int imga::getk()
{
	return k;
}
void imga::setk(int k)
{
	this->k = k;
}

