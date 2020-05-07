**Abstract**

The project is a software system and GUI for creating an MRI Image Dataset Visualization System. It examines the procedure of assembling a User Interface using C++ programming in Visual Studio 2019 to develop and showcase MRI Images using OpenCV. The methods used include creating a class, defining private and public functions and variables, implementation of functions, and testing &amp; debugging along with error checking. The results include reduced salt and pepper noise images using a median filter, and slider bars for controlling the brightness and contrast for each image with individual image outputs saved in file.

**Introduction &amp; Software**

Image processing in C++ programming is a way to perform some methods on an image. The goal of image processing could be to enhance the image or to take some information from it. It is a type of signal processing, and it is a rapidly growing area in the engineering fields. It can be used in research, robotics, pattern recognition, and in the case of this project, the medical field for MRI Image detection.

In this project, I will be focusing mostly on reading and opening images, allocating space, and creating image results with reduced noise and adjusted brightness and contrast. This report will be focused on the following points:

- Displaying a class code for image processing that defines all variables and functions.
- Showing the windows forms for the User Interface that includes buttons, output box, and sliders for image adjustment and enhancement.
- Resulting images that were saved through the files.
- Discussion on results obtained and what important features aided in the completion of this project
- Concluding remarks

The software used in this project is Visual Studio 2019 and OpenCV. Visual Studio 2019 is an integrated development environment, consisting of built in languages including C++. There is a built in directory with C++/CLR which is used to build a Graphical User Interface (GUI). In addition to Visual Studio, this project also includes OpenCV, which is an open source computer vision and machine learning library. It was originally developed by Intel and it contains various application areas. In this project, OpenCV will be used to display the images as the output, and Visual Studio will be where the code is.

**Methods**

During this project, I completed the following steps to perform image processing:

1. Open files and create a metafile
2. Create a class for image processing along with all private and public member variables including accessors and mutators.

![](https://github.com/paulmathai01/MRI-CPP-OPENCV/blob/master/Picture%201.png)

Here the private and public variables and functions are declared. The private variables are the kernel size (which is set to 3), the file path to the metafile, and the file count. The public variables include the image allocated space, and the functions.

1. Define and implement functions within the class (openfile, getmedian, medianblur, setvalues, savefiles)

  1. openfile: this function will read and store the images

![](RackMultipart20200507-4-1owezpf_html_eb6c1a9867b60b59.png)

  1. getMedian: a function to get the median in a 1D array of size k\*k (where k is the kernel size). The sort function is used.

![](RackMultipart20200507-4-1owezpf_html_30d39276e691c67d.jpg)

  1. m ![](RackMultipart20200507-4-1owezpf_html_44732f67d31e3e6d.jpg) edianBlur: the medianBlur function is for the variable kernel size. The for loop iterates through the images in the array, and it then parses through each element of the image starting from k/2 to compensate for the kernel size. A temporary 1D array is created to sort and find the median value, and then the kernel is populated through the nested for loops. Then the median value is set to the new image.

  1. s ![](RackMultipart20200507-4-1owezpf_html_742b57e6c3072828.jpg) etvalues: The setvalues function is used to apply the brightness and contrast values. Scale conversion is used to control the contrast value, and the values are then inputted into the new image.
1. It is important to note that after the medianBlur and setvalues functions, a win\_mat function is used to show and save the original and new images.

![](RackMultipart20200507-4-1owezpf_html_58b616efbd83faeb.png)

Once the class and functions are completed, I will proceed to the User Interface portion of the project. The following steps were completed:

1. Create windows forms by the default project format. Creates a blank form to add buttons, area to plot image, and trackbar for brightness and contrast and kernel.

![](RackMultipart20200507-4-1owezpf_html_8ae9a5bb941bee0f.jpg)

1. The OpenCV function is used to display the images, but the open file button will show if files are opened successfully or not from the metafile. In this code, the number of files is read and that many files are put into an image array.

![](RackMultipart20200507-4-1owezpf_html_73a722f15fa4ac51.jpg)

1. In the GUI, a button is created that applies the brightness and contrast, the values for which will be taken from the track bar (Apply &amp; Display). Note: it is important to remember that the standard strings will be converted to system strings for the output to show in output box.
2. The function is called to open the file and populate the image array. Then the setvalues function is called to apply the changes to the image, and the input stream is closed to avoid overwriting. The code from #3 and #4 is displayed below:

![](RackMultipart20200507-4-1owezpf_html_c443efbfeec9df10.png)

![](RackMultipart20200507-4-1owezpf_html_61312651d7006af8.png)

![](RackMultipart20200507-4-1owezpf_html_9170bb1ce6284efa.png)

1. Now, we will focus on the kernel track bar for the median filter. A noise button is created and here input is taken from the kernel track bar for the kernel value. The noise button will be used to open the files and the image array is populated. Then, the function called will apply the median filter. The standard strings are again converted to system strings and the input stream is closed once applying the function.

![](RackMultipart20200507-4-1owezpf_html_44c61dfd489cb588.png)

1. Each track bar will have a track bar scroll function (kernel, brightness, and contrast). In these private functions, the respective function is applied to get the values and calculate.

1. In the Form1.h file, functions to save individual images for the brightness/contrast and median filter are implemented. (Screenshot).

![](RackMultipart20200507-4-1owezpf_html_b322a7500037159d.png)

Results

The median filter, brightness, and contrast were adjusted and opened in OpenCV to display the images. In the GUI, the open file button was used to see if the files were opened successfully and read into the program, the results will display in the output box. OpenCV will then display the images. The images were individually saved and also saved combined. The following is the result from the median filter, the output of images was 27, a portion of the combined output for the median filter is displayed below:

![](RackMultipart20200507-4-1owezpf_html_5f59762b3b30ba27.jpg)

_These are the combined outputs for kernel size 3._

For brightness and contrast, the individual images were saved. A few individual output images for brightness and contrast are displayed below as shown in the OpenCV:

![](RackMultipart20200507-4-1owezpf_html_bcc71ae6ed408c44.jpg) ![](RackMultipart20200507-4-1owezpf_html_8ab98174bd2a70cf.jpg) ![](RackMultipart20200507-4-1owezpf_html_752743d7d919548.jpg)

_The following are the results that were saved individually once the values were set for brightness and contrast. The values were set through the slider and implemented through the function._

Discussion

For this project, my group member and I learned how to apply the median filter and adjust brightness and contrast on the trackbars with setting values. I do have prior experience with working with OpenCV, as I had used this before to display eye images. With this project, I got the opportunity to work deeper with image processing. In terms of memory allocation, dynamic allocation was used as the change of the kernel size would require different sizes of the current window. The memory for the image arrays is still static and set to 50 max, and that value would have changed depending on if more space was needed. It is important to use dynamic allocation because you cannot determine the maximum amount of memory to use at compile time.

Additionally, I learned the various applications of image processing with this project, which included the addition of the brightness value and the multiplication of the contrast value along with the calculation of the median filter. They are implemented inside the class as functions and the appropriate OpenCV functions are used within those functions.

There are various image processing features of OpenCV that could have been used in this project. Two of these features, for example, are Image Thresholding and Morphological Transformations. Simple image thresholding involves converting images to binary images. This is similar to median filter, however, each pixel is set to the same threshold value. So, if the pixel value is smaller than the threshold, it is set to 0, and if it larger then it is set to the maximum value. This will create a resulting image showing binary output. This will classify the image into groups, creating upper and lower bounds. Another feature in Morphological Transformation is called Erosion. In erosion, the feature erodes away the boundaries depending on the size of the kernel. Therefore, the thickness will decrease in the image and this is useful because it removes small white noise, which could be misdiagnosed in an MRI otherwise.

These are some features that I did not realize could be used in image processing for this project. Although this is out of the project scope, it would have been interesting to see the displayed results from erosion and simple image thresholding.

Conclusion

This report summarizes the image processing methods of the MRI Images. A class was created, functions were implemented, and variables were input by the user on the User Interface. The general results included a median filter, with a combined display of original and removed noise images, and the new images with adjusted brightness and contrast.

To conclude, it is found that image processing can be impactful in the industry as the use of the UI and the median filter cleared up a noisy image, and also enhanced it in ways we would otherwise not be able to see. Having experience with C++ programming, I had not yet discovered that this could be possible with image processing. Implementation of these functions ensures a accurate and fast approach to clearing and finding specific things in the image. I learned that this can be done to a deeper level if further pursued.

Even though this project touched the basics of image processing, it showed what a simple class with simple functions and calculations can create using images and data. Knowing this about OpenCV and the User Interface, I will be able to build upon this and expand further if I work with such a project in the future.

#pragma once

//importing the required libraries

#include &quot;pch.h&quot;

#include \&lt;opencv2/core/core.hpp\&gt;

#include \&lt;opencv2/highgui/highgui.hpp\&gt;

#include \&lt;iostream\&gt;

#include \&lt;fstream\&gt;

//namespace definitions for use of functions conviniently

**using**** namespace** std;

**using**** namespace** cv;

//class defintion

**class** imga

{

**private** :

//private members

**int** k = 3;

string meta\_file\_path = &quot;meta.txt&quot;;

**int** file\_count;

**public** :

//public members

ifstream **in** ;

//max number of images is 50

//can be changed if more images are needed

Mat image[50];

Mat Med\_image[50];

Mat new\_image[50];

//accessor and mutator function

**int** getcount();

**int** getk();

**void** setk( **int** k);

string getmeta();

**void** setcount( **int** count);

//utility functions

**double** getMedian( **double** \*window, **int** k = 3);

**void** medianBlur\_3(Mat image[], Mat Med\_image[]);

**void** medianBlur\_dyn(Mat image[], Mat Med\_image[], **int** k = 3);

**void** setvalues(Mat image[], Mat new\_image[], **double** b = 30, **double** c = 2);

**void** openfile(Mat image[], ifstream&amp; **in** );

**void** savefiles\_bc(Mat new\_image[]);

**void** savefiles\_mf(Mat Med\_image[]);

};

//importing required header files

#include &quot;pch.h&quot;

#include &quot;imga.h&quot;

//function to open the file path and populate the image array

**void** imga::openfile(Mat image[], ifstream&amp; in)

{

//for loop run=s till the number of images mentioned at the start of the meta file

**for** ( **int** i = 0; i \&lt; getcount(); i++)

{

string file\_path;

in \&gt;\&gt; file\_path;

//image is read and stored

image[i] = imread(file\_path, 0);

}

}

//save individual files for eaach output from change of brightness and contrast

**void** imga::savefiles\_bc(Mat new\_image[])

{

**for** ( **int** i = 0; i \&lt; getcount(); i++)

{

//imwrite saves the image at the specified directory

imwrite(format(&quot;Output//B&amp;C//%05d\_Output\_Brightness\_Contrast.png&quot;, i), new\_image[i]);

}

}

//save individual files for each output from the medain filter function

**void** imga::savefiles\_mf(Mat Med\_image[])

{

**for** ( **int** i = 0; i \&lt; getcount(); i++)

{

//imwrite saves the image at the specified directory

imwrite(format(&quot;Output//MF//%05d\_Output\_Median\_3.png&quot;, i), Med\_image[i]);

}

}

//simple function to get the median value in a 1D array of size k\*k, where k is the kernal size

**double** imga::getMedian( **double** \* window, **int** k)

{

**int** size = k \* k;

//std library sort function

std::sort(window, window + size);

**return** window[size/2];

}

//median blur function with variable kernal size

**void** imga::medianBlur\_dyn(Mat image[], Mat Med\_image[], **int** k)

{

//for loop to iterate through the images in the array

**for** ( **int** s = 0; s \&lt; getcount(); s++)

{

//initialising the image object Med\_image with zeros

Med\_image[s] = Mat::zeros(Med\_image[s].size(), Med\_image[s].type());

//for loop to parse through each element of the image

//satrting from k/2 to compensate for the kernal size

**for** ( **int** i = k/2; i \&lt; image[s].rows - (k/2) - 1; i++)

{

**for** ( **int** j = k/2; j \&lt; image[s].cols - (k/2) - 1; j++)

{

//creating a temp 1D array to sort and find median value

**double** \* cur\_window = **new**** double**[k\*k];

//variable to move through the iD array fro each new element from the image

**int** d = 0;

//creating the kernal from the image for each cell

//for loop from -k/2 to k/2 to populate the kernal

**for** ( **int** m = -k / 2; m \&lt; k / 2; m++)

{

**for** ( **int** n = -k / 2; n \&lt; k / 2; n++)

{

cur\_window[d] = image[s].at\&lt;uchar\&gt;(i + m, j + n);

//index for cur\_window is updated to move to the next element

d++;

}

}

//median value is set to the new image

Med\_image[s].at\&lt;uchar\&gt;(i, j) = getMedian(cur\_window, k);

}

}

}

//creating a single image out of multiple image and into the same window to update as value changes

Mat win\_mat(Size(image[0].rows \* 2, image[0].cols \* getcount()), image[0].type());

**for** ( **int** i = 0; i \&lt; getcount(); i++)

{

image[i].copyTo(win\_mat(Rect(0, i \* image[i].cols, image[i].rows, image[i].cols)));

Med\_image[i].copyTo(win\_mat(Rect(Med\_image[i].rows, i \* Med\_image[i].cols, Med\_image[i].rows, Med\_image[i].cols)));

namedWindow(&quot;All Original Images &amp; Median Blur Applied Images&quot;, 1);

cv::imshow(&quot;All Original Images &amp; Median Blur Applied Images&quot;, win\_mat);

imwrite(&quot;Output//Median\_Blur\_Dynamic\_Combined\_Output.png&quot;, win\_mat);

}

}

//median blur function for kernal size 3

**void** imga::medianBlur\_3(Mat image[], Mat Med\_image[])

{

**for** ( **int** s = 0; s \&lt; getcount(); s++)

{

Med\_image[s] = Mat::zeros(image[s].size(), image[s].type());

**for** ( **int** i = 1; i \&lt; image[s].rows - 1; i++)

{

**for** ( **int** j = 1; j \&lt; image[s].rows - 1; j++)

{

**double** cur\_window[9];

//cur\_wndow created manually raher than adjusting for the size of the kernal

cur\_window[0] = image[s].at\&lt;uchar\&gt;(i - 1, j - 1);

cur\_window[1] = image[s].at\&lt;uchar\&gt;(i - 1, j);

cur\_window[2] = image[s].at\&lt;uchar\&gt;(i - 1, j + 1);

cur\_window[3] = image[s].at\&lt;uchar\&gt;(i, j - 1);

cur\_window[4] = image[s].at\&lt;uchar\&gt;(i, j);

cur\_window[5] = image[s].at\&lt;uchar\&gt;(i, j + 1);

cur\_window[6] = image[s].at\&lt;uchar\&gt;(i + 1, j - 1);

cur\_window[7] = image[s].at\&lt;uchar\&gt;(i + 1, j);

cur\_window[8] = image[s].at\&lt;uchar\&gt;(i + 1, j + 1);

Med\_image[s].at\&lt;uchar\&gt;(i, j) = getMedian(cur\_window,3);

}

}

}

//conbining the images into one

Mat win\_mat(Size(image[0].rows \* 2, image[0].cols \* getcount()), image[0].type());

**for** ( **int** i = 0; i \&lt; getcount(); i++)

{

image[i].copyTo(win\_mat(Rect(0, i \* image[i].cols, image[i].rows, image[i].cols)));

Med\_image[i].copyTo(win\_mat(Rect(Med\_image[i].rows, i \* Med\_image[i].cols, Med\_image[i].rows, Med\_image[i].cols)));

namedWindow(&quot;All Original Images &amp; Median Blur Applied Images&quot;, 1);

cv::imshow(&quot;All Original Images &amp; Median Blur Applied Images&quot;, win\_mat);

imwrite(&quot;Output//Median\_Blur\_3\_Combined\_Output.png&quot;, win\_mat);

}

}

//function to apply brightness and contrast value

**void** imga::setvalues(Mat image[], Mat new\_image[], **double** b, **double** c)

{

//for loop to iterate through the images

**for** ( **int** i = 0; i \&lt; getcount(); i++)

{

//converting to scale of 3.0 from 100 input

//converstion is required to control the contrast value, else the diffrence between high and low valuies is too big

//input is maintained as 100 to introduce some granularity to contrast value. else there is only 3 vaklues for contrast which is not sufficient for practical reasons

**double** alpha = (c \* 3) / 100;

**double** beta = b;

new\_image[i] = Mat::zeros(image[i].size(), image[i].type());

**for** ( **int** x = 0; x \&lt; image[i].rows; x++) {

**for** ( **int** y = 0; y \&lt; image[i].cols; y++) {

new\_image[i].at\&lt;uchar\&gt;(x, y) = (alpha \* image[i].at\&lt;uchar\&gt;(x, y) + beta);

}

}

}

//again combining the imnages into one for the output

Mat win\_mat(Size(image[0].rows \* 2, image[0].cols \* getcount()), image[0].type());

**for** ( **int** i = 0; i \&lt; getcount(); i++)

{

image[i].copyTo(win\_mat(Rect(0, i\*image[i].cols, image[i].rows, image[i].cols)));

new\_image[i].copyTo(win\_mat(Rect(image[i].rows, i\*image[i].cols, image[i].rows, image[i].cols)));

namedWindow(&quot;All Original Image &amp; Edited Image&quot;, 1);

cv::imshow(&quot;All Original Image &amp; Edited Image&quot;, win\_mat);

//writing the conbined image

imwrite(&quot;Output//Edited\_Combined\_Output.png&quot;, win\_mat);

}

}

//accesors and mutators for the private variables

**void** imga::setcount( **int** count)

{

file\_count = count;

}

string imga::getmeta()

{

**return** meta\_file\_path;

}

**int** imga::getcount()

{

**return** file\_count;

}

**int** imga::getk()

{

**return** k;

}

**void** imga::setk( **int** k)

{

**this** -\&gt;k = k;

}

//importing all the required header files

#pragma once

#include &quot;pch.h&quot;

#include \&lt;iostream\&gt;

#include \&lt;iomanip\&gt;

#include \&lt;string\&gt;

#include \&lt;opencv2/core/core.hpp\&gt;

#include \&lt;opencv2/highgui/highgui.hpp\&gt;

#include &quot;imga.h&quot;

//defining the namspace used for the opencv functions and objects as well as for the std library functions

**using**** namespace** std;

**using**** namespace** cv;

**namespace** CppCLRWinformsProjekt {

**using**** namespace** System;

**using**** namespace** System::ComponentModel;

**using**** namespace** System::Collections;

**using**** namespace** System::Windows::Forms;

**using**** namespace** System::Data;

**using**** namespace** System::Drawing;

//declaring the object of the class imga, the precedding part of the code merges multiple definition of the class object &quot;img\_obj&quot;

\_\_declspec(selectany) imga img\_obj;

//autocoded part

**public** ref **class** Form1 : **public** System::Windows::Forms::Form

{

**public** :

Form1( **void** )

{

InitializeComponent();

//

// **TODO: add constructor code here**

//

}

**protected** :

/// \&lt;summary\&gt;

/// clean up resourses used

/// \&lt;/summary\&gt;

~Form1()

{

**if** (components)

{

**delete** components;

}

}

**private** : System::Windows::Forms::Button^ editbtn;

**protected** :

**private** : System::Windows::Forms::Button^ openfilebtn;

**private** : System::Windows::Forms::TrackBar^ brightnesstrackBar;

**private** : System::Windows::Forms::TextBox^ outputbox;

**protected** :

**private** : System::Windows::Forms::TrackBar^ contrasttrackBar;

**private** : System::Windows::Forms::Label^ brightnesslbl;

**private** : System::Windows::Forms::Label^ contrastlbl;

**private** : System::Windows::Forms::Label^ label3;

**private** : System::Windows::Forms::Label^ noisereductionlbl;

**private** : System::Windows::Forms::Button^ noisebtn;

**private** : System::Windows::Forms::Label^ photoeditorlbl;

**private** : System::Windows::Forms::TrackBar^ kernaltrackbar;

**private** : System::Windows::Forms::Label^ label2;

**private** : System::Windows::Forms::Label^ label4;

**private** : System::Windows::Forms::Button^ savebcbtn;

**private** : System::Windows::Forms::Button^ savemfbtn;

**private** :

/// \&lt;summary\&gt;

/// Erforderliche Designervariable.

/// \&lt;/summary\&gt;

System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

/// \&lt;summary\&gt;

/// Erforderliche Methode f¸r die Designerunterst¸tzung.

/// Der Inhalt der Methode darf nicht mit dem Code-Editor ge‰ndert werden.

/// \&lt;/summary\&gt;

**void** InitializeComponent( **void** )

{

**this** -\&gt;editbtn = (gcnew System::Windows::Forms::Button());

**this** -\&gt;openfilebtn = (gcnew System::Windows::Forms::Button());

**this** -\&gt;brightnesstrackBar = (gcnew System::Windows::Forms::TrackBar());

**this** -\&gt;outputbox = (gcnew System::Windows::Forms::TextBox());

**this** -\&gt;contrasttrackBar = (gcnew System::Windows::Forms::TrackBar());

**this** -\&gt;brightnesslbl = (gcnew System::Windows::Forms::Label());

**this** -\&gt;contrastlbl = (gcnew System::Windows::Forms::Label());

**this** -\&gt;label3 = (gcnew System::Windows::Forms::Label());

**this** -\&gt;noisereductionlbl = (gcnew System::Windows::Forms::Label());

**this** -\&gt;noisebtn = (gcnew System::Windows::Forms::Button());

**this** -\&gt;photoeditorlbl = (gcnew System::Windows::Forms::Label());

**this** -\&gt;kernaltrackbar = (gcnew System::Windows::Forms::TrackBar());

**this** -\&gt;label2 = (gcnew System::Windows::Forms::Label());

**this** -\&gt;label4 = (gcnew System::Windows::Forms::Label());

**this** -\&gt;savebcbtn = (gcnew System::Windows::Forms::Button());

**this** -\&gt;savemfbtn = (gcnew System::Windows::Forms::Button());

(cli::safe\_cast\&lt;System::ComponentModel::ISupportInitialize^\&gt;( **this** -\&gt;brightnesstrackBar))-\&gt;BeginInit();

(cli::safe\_cast\&lt;System::ComponentModel::ISupportInitialize^\&gt;( **this** -\&gt;contrasttrackBar))-\&gt;BeginInit();

(cli::safe\_cast\&lt;System::ComponentModel::ISupportInitialize^\&gt;( **this** -\&gt;kernaltrackbar))-\&gt;BeginInit();

**this** -\&gt;SuspendLayout();

//

// editbtn

//

**this** -\&gt;editbtn-\&gt;Location = System::Drawing::Point(888, 524);

**this** -\&gt;editbtn-\&gt;Name = L&quot;editbtn&quot;;

**this** -\&gt;editbtn-\&gt;Size = System::Drawing::Size(242, 68);

**this** -\&gt;editbtn-\&gt;TabIndex = 0;

**this** -\&gt;editbtn-\&gt;Text = L&quot;Apply &amp;&amp; Display&quot;;

**this** -\&gt;editbtn-\&gt;UseVisualStyleBackColor = **true** ;

**this** -\&gt;editbtn-\&gt;Click += gcnew System::EventHandler( **this** , &amp;Form1::editbtn\_Click);

//

// openfilebtn

//

**this** -\&gt;openfilebtn-\&gt;Location = System::Drawing::Point(888, 122);

**this** -\&gt;openfilebtn-\&gt;Name = L&quot;openfilebtn&quot;;

**this** -\&gt;openfilebtn-\&gt;Size = System::Drawing::Size(242, 71);

**this** -\&gt;openfilebtn-\&gt;TabIndex = 1;

**this** -\&gt;openfilebtn-\&gt;Text = L&quot;Open File&quot;;

**this** -\&gt;openfilebtn-\&gt;UseVisualStyleBackColor = **true** ;

**this** -\&gt;openfilebtn-\&gt;Click += gcnew System::EventHandler( **this** , &amp;Form1::openfilebtn\_Click);

//

// brightnesstrackBar

//

**this** -\&gt;brightnesstrackBar-\&gt;Location = System::Drawing::Point(12, 718);

**this** -\&gt;brightnesstrackBar-\&gt;Maximum = 100;

**this** -\&gt;brightnesstrackBar-\&gt;Minimum = 1;

**this** -\&gt;brightnesstrackBar-\&gt;Name = L&quot;brightnesstrackBar&quot;;

**this** -\&gt;brightnesstrackBar-\&gt;Size = System::Drawing::Size(835, 69);

**this** -\&gt;brightnesstrackBar-\&gt;TabIndex = 3;

**this** -\&gt;brightnesstrackBar-\&gt;Value = 32;

**this** -\&gt;brightnesstrackBar-\&gt;Scroll += gcnew System::EventHandler( **this** , &amp;Form1::brightnesstrackBar\_Scroll);

//

// outputbox

//

**this** -\&gt;outputbox-\&gt;Location = System::Drawing::Point(29, 122);

**this** -\&gt;outputbox-\&gt;Multiline = **true** ;

**this** -\&gt;outputbox-\&gt;Name = L&quot;outputbox&quot;;

**this** -\&gt;outputbox-\&gt;Size = System::Drawing::Size(818, 71);

**this** -\&gt;outputbox-\&gt;TabIndex = 4;

//

// contrasttrackBar

//

**this** -\&gt;contrasttrackBar-\&gt;Location = System::Drawing::Point(12, 524);

**this** -\&gt;contrasttrackBar-\&gt;Maximum = 100;

**this** -\&gt;contrasttrackBar-\&gt;Minimum = 1;

**this** -\&gt;contrasttrackBar-\&gt;Name = L&quot;contrasttrackBar&quot;;

**this** -\&gt;contrasttrackBar-\&gt;Size = System::Drawing::Size(835, 69);

**this** -\&gt;contrasttrackBar-\&gt;TabIndex = 5;

**this** -\&gt;contrasttrackBar-\&gt;Value = 32;

**this** -\&gt;contrasttrackBar-\&gt;Scroll += gcnew System::EventHandler( **this** , &amp;Form1::contrasttrackBar\_Scroll);

//

// brightnesslbl

//

**this** -\&gt;brightnesslbl-\&gt;AutoSize = **true** ;

**this** -\&gt;brightnesslbl-\&gt;Font = (gcnew System::Drawing::Font(L&quot;Microsoft Sans Serif&quot;, 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,

**static\_cast** \&lt;System::Byte\&gt;(0)));

**this** -\&gt;brightnesslbl-\&gt;Location = System::Drawing::Point(340, 631);

**this** -\&gt;brightnesslbl-\&gt;Name = L&quot;brightnesslbl&quot;;

**this** -\&gt;brightnesslbl-\&gt;Size = System::Drawing::Size(168, 37);

**this** -\&gt;brightnesslbl-\&gt;TabIndex = 7;

**this** -\&gt;brightnesslbl-\&gt;Text = L&quot;Brightness&quot;;

//

// contrastlbl

//

**this** -\&gt;contrastlbl-\&gt;AutoSize = **true** ;

**this** -\&gt;contrastlbl-\&gt;Font = (gcnew System::Drawing::Font(L&quot;Microsoft Sans Serif&quot;, 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,

**static\_cast** \&lt;System::Byte\&gt;(0)));

**this** -\&gt;contrastlbl-\&gt;Location = System::Drawing::Point(352, 484);

**this** -\&gt;contrastlbl-\&gt;Name = L&quot;contrastlbl&quot;;

**this** -\&gt;contrastlbl-\&gt;Size = System::Drawing::Size(139, 37);

**this** -\&gt;contrastlbl-\&gt;TabIndex = 8;

**this** -\&gt;contrastlbl-\&gt;Text = L&quot;Contrast&quot;;

//

// label3

//

**this** -\&gt;label3-\&gt;Location = System::Drawing::Point(0, 0);

**this** -\&gt;label3-\&gt;Name = L&quot;label3&quot;;

**this** -\&gt;label3-\&gt;Size = System::Drawing::Size(100, 23);

**this** -\&gt;label3-\&gt;TabIndex = 13;

//

// noisereductionlbl

//

**this** -\&gt;noisereductionlbl-\&gt;AutoSize = **true** ;

**this** -\&gt;noisereductionlbl-\&gt;Font = (gcnew System::Drawing::Font(L&quot;Microsoft Sans Serif&quot;, 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,

**static\_cast** \&lt;System::Byte\&gt;(0)));

**this** -\&gt;noisereductionlbl-\&gt;Location = System::Drawing::Point(17, 22);

**this** -\&gt;noisereductionlbl-\&gt;Name = L&quot;noisereductionlbl&quot;;

**this** -\&gt;noisereductionlbl-\&gt;Size = System::Drawing::Size(481, 69);

**this** -\&gt;noisereductionlbl-\&gt;TabIndex = 10;

**this** -\&gt;noisereductionlbl-\&gt;Text = L&quot;Noise Reduction&quot;;

//

// noisebtn

//

**this** -\&gt;noisebtn-\&gt;Location = System::Drawing::Point(888, 211);

**this** -\&gt;noisebtn-\&gt;Name = L&quot;noisebtn&quot;;

**this** -\&gt;noisebtn-\&gt;Size = System::Drawing::Size(242, 67);

**this** -\&gt;noisebtn-\&gt;TabIndex = 11;

**this** -\&gt;noisebtn-\&gt;Text = L&quot;Remove Noise &amp;&amp; Display&quot;;

**this** -\&gt;noisebtn-\&gt;UseVisualStyleBackColor = **true** ;

**this** -\&gt;noisebtn-\&gt;Click += gcnew System::EventHandler( **this** , &amp;Form1::noisebtn\_Click);

//

// photoeditorlbl

//

**this** -\&gt;photoeditorlbl-\&gt;AutoSize = **true** ;

**this** -\&gt;photoeditorlbl-\&gt;Font = (gcnew System::Drawing::Font(L&quot;Microsoft Sans Serif&quot;, 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,

**static\_cast** \&lt;System::Byte\&gt;(0)));

**this** -\&gt;photoeditorlbl-\&gt;Location = System::Drawing::Point(17, 384);

**this** -\&gt;photoeditorlbl-\&gt;Name = L&quot;photoeditorlbl&quot;;

**this** -\&gt;photoeditorlbl-\&gt;Size = System::Drawing::Size(370, 69);

**this** -\&gt;photoeditorlbl-\&gt;TabIndex = 12;

**this** -\&gt;photoeditorlbl-\&gt;Text = L&quot;Photo Editor&quot;;

//

// kernaltrackbar

//

**this** -\&gt;kernaltrackbar-\&gt;Location = System::Drawing::Point(29, 271);

**this** -\&gt;kernaltrackbar-\&gt;Maximum = 63;

**this** -\&gt;kernaltrackbar-\&gt;Minimum = 3;

**this** -\&gt;kernaltrackbar-\&gt;Name = L&quot;kernaltrackbar&quot;;

**this** -\&gt;kernaltrackbar-\&gt;Size = System::Drawing::Size(818, 69);

**this** -\&gt;kernaltrackbar-\&gt;SmallChange = 2;

**this** -\&gt;kernaltrackbar-\&gt;TabIndex = 14;

**this** -\&gt;kernaltrackbar-\&gt;Value = 3;

**this** -\&gt;kernaltrackbar-\&gt;Scroll += gcnew System::EventHandler( **this** , &amp;Form1::kernaltrackbar\_Scroll);

//

// label2

//

**this** -\&gt;label2-\&gt;AutoSize = **true** ;

**this** -\&gt;label2-\&gt;Location = System::Drawing::Point(418, 221);

**this** -\&gt;label2-\&gt;Name = L&quot;label2&quot;;

**this** -\&gt;label2-\&gt;Size = System::Drawing::Size(0, 20);

**this** -\&gt;label2-\&gt;TabIndex = 16;

//

// label4

//

**this** -\&gt;label4-\&gt;AutoSize = **true** ;

**this** -\&gt;label4-\&gt;Font = (gcnew System::Drawing::Font(L&quot;Microsoft Sans Serif&quot;, 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,

**static\_cast** \&lt;System::Byte\&gt;(0)));

**this** -\&gt;label4-\&gt;Location = System::Drawing::Point(340, 221);

**this** -\&gt;label4-\&gt;Name = L&quot;label4&quot;;

**this** -\&gt;label4-\&gt;Size = System::Drawing::Size(179, 37);

**this** -\&gt;label4-\&gt;TabIndex = 17;

**this** -\&gt;label4-\&gt;Text = L&quot;Kernal Size&quot;;

//

// savebcbtn

//

**this** -\&gt;savebcbtn-\&gt;Location = System::Drawing::Point(888, 686);

**this** -\&gt;savebcbtn-\&gt;Name = L&quot;savebcbtn&quot;;

**this** -\&gt;savebcbtn-\&gt;Size = System::Drawing::Size(242, 68);

**this** -\&gt;savebcbtn-\&gt;TabIndex = 18;

**this** -\&gt;savebcbtn-\&gt;Text = L&quot;Save Files&quot;;

**this** -\&gt;savebcbtn-\&gt;UseVisualStyleBackColor = **true** ;

**this** -\&gt;savebcbtn-\&gt;Click += gcnew System::EventHandler( **this** , &amp;Form1::savebcbtn\_Click);

//

// savemfbtn

//

**this** -\&gt;savemfbtn-\&gt;Location = System::Drawing::Point(888, 296);

**this** -\&gt;savemfbtn-\&gt;Name = L&quot;savemfbtn&quot;;

**this** -\&gt;savemfbtn-\&gt;Size = System::Drawing::Size(242, 68);

**this** -\&gt;savemfbtn-\&gt;TabIndex = 19;

**this** -\&gt;savemfbtn-\&gt;Text = L&quot;Save Files&quot;;

**this** -\&gt;savemfbtn-\&gt;UseVisualStyleBackColor = **true** ;

**this** -\&gt;savemfbtn-\&gt;Click += gcnew System::EventHandler( **this** , &amp;Form1::savemfbtn\_Click);

//

// Form1

//

**this** -\&gt;AutoScaleDimensions = System::Drawing::SizeF(9, 20);

**this** -\&gt;AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;

**this** -\&gt;ClientSize = System::Drawing::Size(1185, 886);

**this** -\&gt;Controls-\&gt;Add( **this** -\&gt;savemfbtn);

**this** -\&gt;Controls-\&gt;Add( **this** -\&gt;savebcbtn);

**this** -\&gt;Controls-\&gt;Add( **this** -\&gt;label4);

**this** -\&gt;Controls-\&gt;Add( **this** -\&gt;label2);

**this** -\&gt;Controls-\&gt;Add( **this** -\&gt;kernaltrackbar);

**this** -\&gt;Controls-\&gt;Add( **this** -\&gt;photoeditorlbl);

**this** -\&gt;Controls-\&gt;Add( **this** -\&gt;noisebtn);

**this** -\&gt;Controls-\&gt;Add( **this** -\&gt;noisereductionlbl);

**this** -\&gt;Controls-\&gt;Add( **this** -\&gt;label3);

**this** -\&gt;Controls-\&gt;Add( **this** -\&gt;openfilebtn);

**this** -\&gt;Controls-\&gt;Add( **this** -\&gt;contrastlbl);

**this** -\&gt;Controls-\&gt;Add( **this** -\&gt;brightnesslbl);

**this** -\&gt;Controls-\&gt;Add( **this** -\&gt;contrasttrackBar);

**this** -\&gt;Controls-\&gt;Add( **this** -\&gt;outputbox);

**this** -\&gt;Controls-\&gt;Add( **this** -\&gt;brightnesstrackBar);

**this** -\&gt;Controls-\&gt;Add( **this** -\&gt;editbtn);

**this** -\&gt;Name = L&quot;Form1&quot;;

**this** -\&gt;Text = L&quot;Form1&quot;;

(cli::safe\_cast\&lt;System::ComponentModel::ISupportInitialize^\&gt;( **this** -\&gt;brightnesstrackBar))-\&gt;EndInit();

(cli::safe\_cast\&lt;System::ComponentModel::ISupportInitialize^\&gt;( **this** -\&gt;contrasttrackBar))-\&gt;EndInit();

(cli::safe\_cast\&lt;System::ComponentModel::ISupportInitialize^\&gt;( **this** -\&gt;kernaltrackbar))-\&gt;EndInit();

**this** -\&gt;ResumeLayout( **false** );

**this** -\&gt;PerformLayout();

}

#pragma endregion

//the brightness and contrast apply button definition

**private** : System::Void editbtn\_Click(System::Object^ sender, System::EventArgs^ e) {

//redundant check for if the file is open, if not it opens it

**if** (!img\_obj. **in**.is\_open())

{

**int** file\_count;

img\_obj. **in**.open(img\_obj.getmeta());

img\_obj. **in** \&gt;\&gt; file\_count;

img\_obj.setcount(file\_count);

//printing to outbox if the file is open and image array is populated

**if** (img\_obj. **in** )

outputbox-\&gt;AppendText(&quot;File Opened Succesfully&quot;);

**else**

{

outputbox-\&gt;AppendText(&quot;\r\nFailed to open file&quot;);

}

}

//fetching the value of brightness and contrast from the two trackbar objects

**double** b = **this** -\&gt;brightnesstrackBar-\&gt;Value;

**double** c = **this** -\&gt;contrasttrackBar-\&gt;Value;

//converting the values from std string to system string to ouput into the outputbox

string strmb = to\_string(b);

string strmc = to\_string(c);

System::String^ strm1b = gcnew System::String(strmb.c\_str());

System::String^ strm1c = gcnew System::String(strmc.c\_str());

//since the program is for windows \r\n is required to add nextline instead of just \n

outputbox-\&gt;AppendText(&quot;\r\nApplying Brightness and Contrast&quot;);

outputbox-\&gt;AppendText(&quot;\r\nB =&quot;);

outputbox-\&gt;AppendText(strm1b);

outputbox-\&gt;AppendText(&quot;\r\nC =&quot;);

outputbox-\&gt;AppendText(strm1c);

//function calls to open the file and populate the image array

img\_obj.openfile(img\_obj.image, img\_obj. **in** );

//function call to apply the changes

img\_obj.setvalues(img\_obj.image, img\_obj.new\_image, b, c);

//input stream is closed to maintain inout integrity after evevery updateand not overwrite

img\_obj. **in**.close();

}

//defintion to open the file and initialise the input stream

**private** : System::Void openfilebtn\_Click(System::Object^ sender, System::EventArgs^ e) {

**int** file\_count;

img\_obj. **in**.open(img\_obj.getmeta());

//number of files is read and that many files are opened and put into the image array

img\_obj. **in** \&gt;\&gt; file\_count;

img\_obj.setcount(file\_count);

//message to confirm the read and succefull processing

**if** (img\_obj. **in** )

outputbox-\&gt;AppendText(&quot;\r\nFile Opened Succesfully&quot;);

**else**

{

outputbox-\&gt;AppendText(&quot;\r\nFailed to open file&quot;);

}

}

//median filter apply button for kernal size 3

**private** : System::Void noisebtn\_Click(System::Object^ sender, System::EventArgs^ e) {

//redundant check for if the file is open, if not it opens it

**if** (!img\_obj. **in**.is\_open())

{

**int** file\_count;

img\_obj. **in**.open(img\_obj.getmeta());

img\_obj. **in** \&gt;\&gt; file\_count;

img\_obj.setcount(file\_count);

//printing to outbox if the file is open and image array is populated

**if** (img\_obj. **in** )

outputbox-\&gt;AppendText(&quot;File Opened Succesfully&quot;);

**else**

{

outputbox-\&gt;AppendText(&quot;\r\nFailed to open file&quot;);

}

}

//taking input from the trackbar for the kernal value

**int** k = **this** -\&gt;kernaltrackbar-\&gt;Value;

img\_obj.setk(k);

string strmk = to\_string(k);

System::String^ strm1k = gcnew System::String(strmk.c\_str());

outputbox-\&gt;AppendText(&quot;\r\nK =&quot;);

outputbox-\&gt;AppendText(strm1k);

//function calls to open the file and populate the image array

img\_obj.openfile(img\_obj.image, img\_obj. **in** );

//function call to apply the median filter with kernal size fixed as 3

img\_obj.medianBlur\_3(img\_obj.image, img\_obj.Med\_image);

//input stream is closed to maintain inout integrity after evevery updateand not overwrite

img\_obj. **in**.close();

}

//this event trigger is the sane as the button event trigger, there is no change to it.

//only the this event is triggered everytime the trackbar is moved

**private** : System::Void contrasttrackBar\_Scroll(System::Object^ sender, System::EventArgs^ e) {

//redundant check for if the file is open, if not it opens it

**if** (!img\_obj. **in**.is\_open())

{

**int** file\_count;

img\_obj. **in**.open(img\_obj.getmeta());

img\_obj. **in** \&gt;\&gt; file\_count;

img\_obj.setcount(file\_count);

//printing to outbox if the file is open and image array is populated

**if** (img\_obj. **in** )

outputbox-\&gt;AppendText(&quot;File Opened Succesfully&quot;);

**else**

{

outputbox-\&gt;AppendText(&quot;\r\nFailed to open file&quot;);

}

}

**double** b = **this** -\&gt;brightnesstrackBar-\&gt;Value;

**double** c = **this** -\&gt;contrasttrackBar-\&gt;Value;

string strmb = to\_string(b);

string strmc = to\_string(c);

System::String^ strm1b = gcnew System::String(strmb.c\_str());

System::String^ strm1c = gcnew System::String(strmc.c\_str());

outputbox-\&gt;AppendText(&quot;\r\nApplying Brightness and Contrast&quot;);

outputbox-\&gt;AppendText(&quot;\r\nB =&quot;);

outputbox-\&gt;AppendText(strm1b);

outputbox-\&gt;AppendText(&quot;\r\nC =&quot;);

outputbox-\&gt;AppendText(strm1c);

//function calls to open the file and populate the image array

img\_obj.openfile(img\_obj.image, img\_obj. **in** );

img\_obj.setvalues(img\_obj.image, img\_obj.new\_image, b, c);

img\_obj. **in**.close();

}

//this event trigger is the sane as the button event trigger, there is no change to it.

//only the this event is triggered everytime the trackbar is moved

**private** : System::Void brightnesstrackBar\_Scroll(System::Object^ sender, System::EventArgs^ e) {

//redundant check for if the file is open, if not it opens it

**if** (!img\_obj. **in**.is\_open())

{

**int** file\_count;

img\_obj. **in**.open(img\_obj.getmeta());

img\_obj. **in** \&gt;\&gt; file\_count;

img\_obj.setcount(file\_count);

//printing to outbox if the file is open and image array is populated

**if** (img\_obj. **in** )

outputbox-\&gt;AppendText(&quot;File Opened Succesfully&quot;);

**else**

{

outputbox-\&gt;AppendText(&quot;\r\nFailed to open file&quot;);

}

}

**double** b = **this** -\&gt;brightnesstrackBar-\&gt;Value;

**double** c = **this** -\&gt;contrasttrackBar-\&gt;Value;

string strmb = to\_string(b);

string strmc = to\_string(c);

System::String^ strm1b = gcnew System::String(strmb.c\_str());

System::String^ strm1c = gcnew System::String(strmc.c\_str());

outputbox-\&gt;AppendText(&quot;\r\nApplying Brightness and Contrast&quot;);

outputbox-\&gt;AppendText(&quot;\r\nB =&quot;);

outputbox-\&gt;AppendText(strm1b);

outputbox-\&gt;AppendText(&quot;\r\nC =&quot;);

outputbox-\&gt;AppendText(strm1c);

//function calls to open the file and populate the image array

img\_obj.openfile(img\_obj.image, img\_obj. **in** );

img\_obj.setvalues(img\_obj.image, img\_obj.new\_image, b, c);

//input stream is closed to maintain inout integrity after evevery updateand not overwrite

img\_obj. **in**.close();

}

**private** : System::Void kernaltrackbar\_Scroll(System::Object^ sender, System::EventArgs^ e) {

//redundant check for if the file is open, if not it opens it

**if** (!img\_obj. **in**.is\_open())

{

**int** file\_count;

img\_obj. **in**.open(img\_obj.getmeta());

img\_obj. **in** \&gt;\&gt; file\_count;

img\_obj.setcount(file\_count);

//printing to outbox if the file is open and image array is populated

**if** (img\_obj. **in** )

outputbox-\&gt;AppendText(&quot;File Opened Succesfully&quot;);

**else**

{

outputbox-\&gt;AppendText(&quot;\r\nFailed to open file&quot;);

}

}

**int** k = **this** -\&gt;kernaltrackbar-\&gt;Value;

img\_obj.setk(k);

string strmk = to\_string(k);

System::String^ strm1k = gcnew System::String(strmk.c\_str());

outputbox-\&gt;AppendText(&quot;\r\nK =&quot;);

outputbox-\&gt;AppendText(strm1k);

//function calls to open the file and populate the image array

img\_obj.openfile(img\_obj.image, img\_obj. **in** );

//function call to the dynamic median blur function with the kernal value is passed from the kernal trackbar

img\_obj.medianBlur\_dyn(img\_obj.image, img\_obj.Med\_image, img\_obj.getk());

//input stream is closed to maintain inout integrity after evevery updateand not overwrite

img\_obj. **in**.close();

}

//save button to save individual images for brightness and contrast

**private** : System::Void savebcbtn\_Click(System::Object^ sender, System::EventArgs^ e) {

//fucntioncall to the appropriate save function

img\_obj.savefiles\_bc(img\_obj.new\_image);

}

//save button to save individual images for median filter

**private** : System::Void savemfbtn\_Click(System::Object^ sender, System::EventArgs^ e) {

//fucntioncall to the appropriate save function

img\_obj.savefiles\_mf(img\_obj.Med\_image);

}

};

}
