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

![](https://github.com/paulmathai01/MRI-CPP-OPENCV/blob/master/Picture%202.png)

  1. getMedian: a function to get the median in a 1D array of size k\*k (where k is the kernel size). The sort function is used.

![](https://github.com/paulmathai01/MRI-CPP-OPENCV/blob/master/Picture%203.png)

  1. m ![](https://github.com/paulmathai01/MRI-CPP-OPENCV/blob/master/Picture%204.png) edianBlur: the medianBlur function is for the variable kernel size. The for loop iterates through the images in the array, and it then parses through each element of the image starting from k/2 to compensate for the kernel size. A temporary 1D array is created to sort and find the median value, and then the kernel is populated through the nested for loops. Then the median value is set to the new image.

  1. s ![](https://github.com/paulmathai01/MRI-CPP-OPENCV/blob/master/Picture%205.png) etvalues: The setvalues function is used to apply the brightness and contrast values. Scale conversion is used to control the contrast value, and the values are then inputted into the new image.
1. It is important to note that after the medianBlur and setvalues functions, a win\_mat function is used to show and save the original and new images.

![](https://github.com/paulmathai01/MRI-CPP-OPENCV/blob/master/Picture%206.png)

Once the class and functions are completed, I will proceed to the User Interface portion of the project. The following steps were completed:

1. Create windows forms by the default project format. Creates a blank form to add buttons, area to plot image, and trackbar for brightness and contrast and kernel.

![](https://github.com/paulmathai01/MRI-CPP-OPENCV/blob/master/Picture%207.png)

1. The OpenCV function is used to display the images, but the open file button will show if files are opened successfully or not from the metafile. In this code, the number of files is read and that many files are put into an image array.

![](https://github.com/paulmathai01/MRI-CPP-OPENCV/blob/master/Picture%208.png)

1. In the GUI, a button is created that applies the brightness and contrast, the values for which will be taken from the track bar (Apply &amp; Display). Note: it is important to remember that the standard strings will be converted to system strings for the output to show in output box.
2. The function is called to open the file and populate the image array. Then the setvalues function is called to apply the changes to the image, and the input stream is closed to avoid overwriting. The code from #3 and #4 is displayed below:

![](https://github.com/paulmathai01/MRI-CPP-OPENCV/blob/master/Picture%209.png)

![](https://github.com/paulmathai01/MRI-CPP-OPENCV/blob/master/Picture%2010.png)

![](https://github.com/paulmathai01/MRI-CPP-OPENCV/blob/master/Picture%2011.png)

1. Now, we will focus on the kernel track bar for the median filter. A noise button is created and here input is taken from the kernel track bar for the kernel value. The noise button will be used to open the files and the image array is populated. Then, the function called will apply the median filter. The standard strings are again converted to system strings and the input stream is closed once applying the function.

![](https://github.com/paulmathai01/MRI-CPP-OPENCV/blob/master/Picture%2012.png)

1. Each track bar will have a track bar scroll function (kernel, brightness, and contrast). In these private functions, the respective function is applied to get the values and calculate.

1. In the Form1.h file, functions to save individual images for the brightness/contrast and median filter are implemented. (Screenshot).

![](https://github.com/paulmathai01/MRI-CPP-OPENCV/blob/master/Picture%2013.png)

**Results**

The median filter, brightness, and contrast were adjusted and opened in OpenCV to display the images. In the GUI, the open file button was used to see if the files were opened successfully and read into the program, the results will display in the output box. OpenCV will then display the images. The images were individually saved and also saved combined. The following is the result from the median filter, the output of images was 27, a portion of the combined output for the median filter is displayed below:

![](https://github.com/paulmathai01/MRI-CPP-OPENCV/blob/master/Picture%2014.png)

_These are the combined outputs for kernel size 3._

For brightness and contrast, the individual images were saved. A few individual output images for brightness and contrast are displayed below as shown in the OpenCV:

![](https://github.com/paulmathai01/MRI-CPP-OPENCV/blob/master/Picture%2015.png)

_The following are the results that were saved individually once the values were set for brightness and contrast. The values were set through the slider and implemented through the function._


**Conclusion**

This report summarizes the image processing methods of the MRI Images. A class was created, functions were implemented, and variables were input by the user on the User Interface. The general results included a median filter, with a combined display of original and removed noise images, and the new images with adjusted brightness and contrast.

To conclude, it is found that image processing can be impactful in the industry as the use of the UI and the median filter cleared up a noisy image, and also enhanced it in ways we would otherwise not be able to see. Having experience with C++ programming, I had not yet discovered that this could be possible with image processing. Implementation of these functions ensures a accurate and fast approach to clearing and finding specific things in the image. I learned that this can be done to a deeper level if further pursued.

Even though this project touched the basics of image processing, it showed what a simple class with simple functions and calculations can create using images and data. Knowing this about OpenCV and the User Interface, I will be able to build upon this and expand further if I work with such a project in the future.
