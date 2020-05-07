#pragma once
//importing the required libraries
#include "pch.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#include <fstream>
//namespace definitions for use of functions conviniently
using namespace std;
using namespace cv;
//class defintion
class imga
{
private:
    //private members
	int k = 3;
	string meta_file_path = "meta.txt";
	int file_count;

public:
    //public members
	ifstream in;
    //max number of images is 50
    //can be changed if more images are needed
	Mat image[50];
	Mat Med_image[50];
	Mat new_image[50];
    //accessor and mutator function
	int getcount();
	int getk();
	void setk(int k);
	string getmeta();
	void setcount(int count);
    //utility functions
	double getMedian(double *window, int k = 3);
	void medianBlur_3(Mat image[], Mat Med_image[]);
	void medianBlur_dyn(Mat image[], Mat Med_image[], int k = 3);
	void setvalues(Mat image[], Mat new_image[], double b = 30, double c = 2);
	void openfile(Mat image[], ifstream& in);
	void savefiles_bc(Mat new_image[]);
	void savefiles_mf(Mat Med_image[]);

};
