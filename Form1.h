//importing all the required header files
#pragma once
#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "imga.h"
//defining the namspace used for the opencv functions and objects as well as for the std library functions
using namespace std;
using namespace cv;



namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    //declaring the object of the class imga, the precedding part of the code merges multiple definition of the class object "img_obj"
	__declspec(selectany) imga img_obj;
    //autocoded part
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: add constructor code here
			//
		}

	protected:
		/// <summary>
		/// clean up resourses used
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ editbtn;
	protected:

	private: System::Windows::Forms::Button^ openfilebtn;
	private: System::Windows::Forms::TrackBar^ brightnesstrackBar;
	private: System::Windows::Forms::TextBox^ outputbox;

	protected:




	private: System::Windows::Forms::TrackBar^ contrasttrackBar;
	private: System::Windows::Forms::Label^ brightnesslbl;




	private: System::Windows::Forms::Label^ contrastlbl;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ noisereductionlbl;

	private: System::Windows::Forms::Button^ noisebtn;
	private: System::Windows::Forms::Label^ photoeditorlbl;
	private: System::Windows::Forms::TrackBar^ kernaltrackbar;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ savebcbtn;

	private: System::Windows::Forms::Button^ savemfbtn;





	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->editbtn = (gcnew System::Windows::Forms::Button());
			this->openfilebtn = (gcnew System::Windows::Forms::Button());
			this->brightnesstrackBar = (gcnew System::Windows::Forms::TrackBar());
			this->outputbox = (gcnew System::Windows::Forms::TextBox());
			this->contrasttrackBar = (gcnew System::Windows::Forms::TrackBar());
			this->brightnesslbl = (gcnew System::Windows::Forms::Label());
			this->contrastlbl = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->noisereductionlbl = (gcnew System::Windows::Forms::Label());
			this->noisebtn = (gcnew System::Windows::Forms::Button());
			this->photoeditorlbl = (gcnew System::Windows::Forms::Label());
			this->kernaltrackbar = (gcnew System::Windows::Forms::TrackBar());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->savebcbtn = (gcnew System::Windows::Forms::Button());
			this->savemfbtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->brightnesstrackBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->contrasttrackBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kernaltrackbar))->BeginInit();
			this->SuspendLayout();
			// 
			// editbtn
			// 
			this->editbtn->Location = System::Drawing::Point(888, 524);
			this->editbtn->Name = L"editbtn";
			this->editbtn->Size = System::Drawing::Size(242, 68);
			this->editbtn->TabIndex = 0;
			this->editbtn->Text = L"Apply && Display";
			this->editbtn->UseVisualStyleBackColor = true;
			this->editbtn->Click += gcnew System::EventHandler(this, &Form1::editbtn_Click);
			// 
			// openfilebtn
			// 
			this->openfilebtn->Location = System::Drawing::Point(888, 122);
			this->openfilebtn->Name = L"openfilebtn";
			this->openfilebtn->Size = System::Drawing::Size(242, 71);
			this->openfilebtn->TabIndex = 1;
			this->openfilebtn->Text = L"Open File";
			this->openfilebtn->UseVisualStyleBackColor = true;
			this->openfilebtn->Click += gcnew System::EventHandler(this, &Form1::openfilebtn_Click);
			// 
			// brightnesstrackBar
			// 
			this->brightnesstrackBar->Location = System::Drawing::Point(12, 718);
			this->brightnesstrackBar->Maximum = 100;
			this->brightnesstrackBar->Minimum = 1;
			this->brightnesstrackBar->Name = L"brightnesstrackBar";
			this->brightnesstrackBar->Size = System::Drawing::Size(835, 69);
			this->brightnesstrackBar->TabIndex = 3;
			this->brightnesstrackBar->Value = 32;
			this->brightnesstrackBar->Scroll += gcnew System::EventHandler(this, &Form1::brightnesstrackBar_Scroll);
			// 
			// outputbox
			// 
			this->outputbox->Location = System::Drawing::Point(29, 122);
			this->outputbox->Multiline = true;
			this->outputbox->Name = L"outputbox";
			this->outputbox->Size = System::Drawing::Size(818, 71);
			this->outputbox->TabIndex = 4;
			// 
			// contrasttrackBar
			// 
			this->contrasttrackBar->Location = System::Drawing::Point(12, 524);
			this->contrasttrackBar->Maximum = 100;
			this->contrasttrackBar->Minimum = 1;
			this->contrasttrackBar->Name = L"contrasttrackBar";
			this->contrasttrackBar->Size = System::Drawing::Size(835, 69);
			this->contrasttrackBar->TabIndex = 5;
			this->contrasttrackBar->Value = 32;
			this->contrasttrackBar->Scroll += gcnew System::EventHandler(this, &Form1::contrasttrackBar_Scroll);
			// 
			// brightnesslbl
			// 
			this->brightnesslbl->AutoSize = true;
			this->brightnesslbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->brightnesslbl->Location = System::Drawing::Point(340, 631);
			this->brightnesslbl->Name = L"brightnesslbl";
			this->brightnesslbl->Size = System::Drawing::Size(168, 37);
			this->brightnesslbl->TabIndex = 7;
			this->brightnesslbl->Text = L"Brightness";
			// 
			// contrastlbl
			// 
			this->contrastlbl->AutoSize = true;
			this->contrastlbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contrastlbl->Location = System::Drawing::Point(352, 484);
			this->contrastlbl->Name = L"contrastlbl";
			this->contrastlbl->Size = System::Drawing::Size(139, 37);
			this->contrastlbl->TabIndex = 8;
			this->contrastlbl->Text = L"Contrast";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(0, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 23);
			this->label3->TabIndex = 13;
			// 
			// noisereductionlbl
			// 
			this->noisereductionlbl->AutoSize = true;
			this->noisereductionlbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->noisereductionlbl->Location = System::Drawing::Point(17, 22);
			this->noisereductionlbl->Name = L"noisereductionlbl";
			this->noisereductionlbl->Size = System::Drawing::Size(481, 69);
			this->noisereductionlbl->TabIndex = 10;
			this->noisereductionlbl->Text = L"Noise Reduction";
			// 
			// noisebtn
			// 
			this->noisebtn->Location = System::Drawing::Point(888, 211);
			this->noisebtn->Name = L"noisebtn";
			this->noisebtn->Size = System::Drawing::Size(242, 67);
			this->noisebtn->TabIndex = 11;
			this->noisebtn->Text = L"Remove Noise && Display";
			this->noisebtn->UseVisualStyleBackColor = true;
			this->noisebtn->Click += gcnew System::EventHandler(this, &Form1::noisebtn_Click);
			// 
			// photoeditorlbl
			// 
			this->photoeditorlbl->AutoSize = true;
			this->photoeditorlbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->photoeditorlbl->Location = System::Drawing::Point(17, 384);
			this->photoeditorlbl->Name = L"photoeditorlbl";
			this->photoeditorlbl->Size = System::Drawing::Size(370, 69);
			this->photoeditorlbl->TabIndex = 12;
			this->photoeditorlbl->Text = L"Photo Editor";
			// 
			// kernaltrackbar
			// 
			this->kernaltrackbar->Location = System::Drawing::Point(29, 271);
			this->kernaltrackbar->Maximum = 63;
			this->kernaltrackbar->Minimum = 3;
			this->kernaltrackbar->Name = L"kernaltrackbar";
			this->kernaltrackbar->Size = System::Drawing::Size(818, 69);
			this->kernaltrackbar->SmallChange = 2;
			this->kernaltrackbar->TabIndex = 14;
			this->kernaltrackbar->Value = 3;
			this->kernaltrackbar->Scroll += gcnew System::EventHandler(this, &Form1::kernaltrackbar_Scroll);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(418, 221);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 20);
			this->label2->TabIndex = 16;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(340, 221);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(179, 37);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Kernal Size";
			// 
			// savebcbtn
			// 
			this->savebcbtn->Location = System::Drawing::Point(888, 686);
			this->savebcbtn->Name = L"savebcbtn";
			this->savebcbtn->Size = System::Drawing::Size(242, 68);
			this->savebcbtn->TabIndex = 18;
			this->savebcbtn->Text = L"Save Files";
			this->savebcbtn->UseVisualStyleBackColor = true;
			this->savebcbtn->Click += gcnew System::EventHandler(this, &Form1::savebcbtn_Click);
			// 
			// savemfbtn
			// 
			this->savemfbtn->Location = System::Drawing::Point(888, 296);
			this->savemfbtn->Name = L"savemfbtn";
			this->savemfbtn->Size = System::Drawing::Size(242, 68);
			this->savemfbtn->TabIndex = 19;
			this->savemfbtn->Text = L"Save Files";
			this->savemfbtn->UseVisualStyleBackColor = true;
			this->savemfbtn->Click += gcnew System::EventHandler(this, &Form1::savemfbtn_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1185, 886);
			this->Controls->Add(this->savemfbtn);
			this->Controls->Add(this->savebcbtn);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->kernaltrackbar);
			this->Controls->Add(this->photoeditorlbl);
			this->Controls->Add(this->noisebtn);
			this->Controls->Add(this->noisereductionlbl);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->openfilebtn);
			this->Controls->Add(this->contrastlbl);
			this->Controls->Add(this->brightnesslbl);
			this->Controls->Add(this->contrasttrackBar);
			this->Controls->Add(this->outputbox);
			this->Controls->Add(this->brightnesstrackBar);
			this->Controls->Add(this->editbtn);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->brightnesstrackBar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->contrasttrackBar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kernaltrackbar))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
    //the brightness and contrast apply button definition
	private: System::Void editbtn_Click(System::Object^ sender, System::EventArgs^ e) {
        //redundant check for if the file is open, if not it opens it
		if (!img_obj.in.is_open())
		{
			int file_count;
			img_obj.in.open(img_obj.getmeta());
			img_obj.in >> file_count;
			img_obj.setcount(file_count);
            //printing to outbox if the file is open and image array is populated
			if (img_obj.in)
				outputbox->AppendText("File Opened Succesfully");
			else
			{
				outputbox->AppendText("\r\nFailed to open file");
			}
		}
		//fetching the value of brightness and contrast from the two trackbar objects
		double b = this->brightnesstrackBar->Value;
		double c = this->contrasttrackBar->Value;
        //converting the values from std string to system string to ouput into the outputbox
		string strmb = to_string(b);
		string strmc = to_string(c);
		System::String^ strm1b = gcnew System::String(strmb.c_str());
		System::String^ strm1c = gcnew System::String(strmc.c_str());
        //since the program is for windows \r\n is required to add nextline instead of just \n
		outputbox->AppendText("\r\nApplying Brightness and Contrast");
		outputbox->AppendText("\r\nB =");
		outputbox->AppendText(strm1b);
		outputbox->AppendText("\r\nC =");
		outputbox->AppendText(strm1c);
        //function calls to open the file and populate the image array
		img_obj.openfile(img_obj.image, img_obj.in);
        //function call to apply the changes
		img_obj.setvalues(img_obj.image, img_obj.new_image, b, c);
        //input stream is closed to maintain inout integrity after evevery updateand not overwrite
		img_obj.in.close();
	}
//defintion to open the file and initialise the input stream
private: System::Void openfilebtn_Click(System::Object^ sender, System::EventArgs^ e) {
	int file_count;
	img_obj.in.open(img_obj.getmeta());
    //number of files is read and that many files are opened and put into the image array
	img_obj.in >> file_count;
	img_obj.setcount(file_count);
    //message to confirm the read and succefull processing
	if(img_obj.in)
		outputbox->AppendText("\r\nFile Opened Succesfully");
	else
	{
		outputbox->AppendText("\r\nFailed to open file");
	}
}
//median filter apply button for kernal size 3
private: System::Void noisebtn_Click(System::Object^ sender, System::EventArgs^ e) {

	//redundant check for if the file is open, if not it opens it
	if (!img_obj.in.is_open())
	{
		int file_count;
		img_obj.in.open(img_obj.getmeta());
		img_obj.in >> file_count;
		img_obj.setcount(file_count);
        //printing to outbox if the file is open and image array is populated
		if (img_obj.in)
			outputbox->AppendText("File Opened Succesfully");
		else
		{
			outputbox->AppendText("\r\nFailed to open file");
		}
	}
    //taking input from the trackbar for the kernal value
	int k = this->kernaltrackbar->Value;
	img_obj.setk(k);
	string strmk = to_string(k);
	System::String^ strm1k = gcnew System::String(strmk.c_str());
	outputbox->AppendText("\r\nK =");
	outputbox->AppendText(strm1k);
    //function calls to open the file and populate the image array
	img_obj.openfile(img_obj.image, img_obj.in);
    //function call to apply the median filter with kernal size fixed as 3
	img_obj.medianBlur_3(img_obj.image, img_obj.Med_image);
    //input stream is closed to maintain inout integrity after evevery updateand not overwrite
	img_obj.in.close();
}
//this event trigger is the sane as the button event trigger, there is no change to it.
//only the this event is triggered everytime the trackbar is moved
private: System::Void contrasttrackBar_Scroll(System::Object^ sender, System::EventArgs^ e) {
    //redundant check for if the file is open, if not it opens it
	if (!img_obj.in.is_open())
	{
		int file_count;
		img_obj.in.open(img_obj.getmeta());
		img_obj.in >> file_count;
		img_obj.setcount(file_count);
        //printing to outbox if the file is open and image array is populated
		if (img_obj.in)
			outputbox->AppendText("File Opened Succesfully");
		else
		{
			outputbox->AppendText("\r\nFailed to open file");
		}
	}

	double b = this->brightnesstrackBar->Value;
	double c = this->contrasttrackBar->Value;

	string strmb = to_string(b);
	string strmc = to_string(c);
	System::String^ strm1b = gcnew System::String(strmb.c_str());
	System::String^ strm1c = gcnew System::String(strmc.c_str());
	outputbox->AppendText("\r\nApplying Brightness and Contrast");
	outputbox->AppendText("\r\nB =");
	outputbox->AppendText(strm1b);
	outputbox->AppendText("\r\nC =");
	outputbox->AppendText(strm1c);
    //function calls to open the file and populate the image array
	img_obj.openfile(img_obj.image, img_obj.in);
	img_obj.setvalues(img_obj.image, img_obj.new_image, b, c);
	img_obj.in.close();
}
//this event trigger is the sane as the button event trigger, there is no change to it.
//only the this event is triggered everytime the trackbar is moved
private: System::Void brightnesstrackBar_Scroll(System::Object^ sender, System::EventArgs^ e) {
    //redundant check for if the file is open, if not it opens it
	if (!img_obj.in.is_open())
	{
		int file_count;
		img_obj.in.open(img_obj.getmeta());
		img_obj.in >> file_count;
		img_obj.setcount(file_count);
        //printing to outbox if the file is open and image array is populated
		if (img_obj.in)
			outputbox->AppendText("File Opened Succesfully");
		else
		{
			outputbox->AppendText("\r\nFailed to open file");
		}
	}
    
	double b = this->brightnesstrackBar->Value;
	double c = this->contrasttrackBar->Value;

	string strmb = to_string(b);
	string strmc = to_string(c);
	System::String^ strm1b = gcnew System::String(strmb.c_str());
	System::String^ strm1c = gcnew System::String(strmc.c_str());
	outputbox->AppendText("\r\nApplying Brightness and Contrast");
	outputbox->AppendText("\r\nB =");
	outputbox->AppendText(strm1b);
	outputbox->AppendText("\r\nC =");
	outputbox->AppendText(strm1c);
    //function calls to open the file and populate the image array
	img_obj.openfile(img_obj.image, img_obj.in);
	img_obj.setvalues(img_obj.image, img_obj.new_image, b, c);
    //input stream is closed to maintain inout integrity after evevery updateand not overwrite
	img_obj.in.close();
}
private: System::Void kernaltrackbar_Scroll(System::Object^ sender, System::EventArgs^ e) {
    //redundant check for if the file is open, if not it opens it
	if (!img_obj.in.is_open())
	{
		int file_count;
		img_obj.in.open(img_obj.getmeta());
		img_obj.in >> file_count;
		img_obj.setcount(file_count);
        //printing to outbox if the file is open and image array is populated
		if (img_obj.in)
			outputbox->AppendText("File Opened Succesfully");
		else
		{
			outputbox->AppendText("\r\nFailed to open file");
		}
	}
	int k = this->kernaltrackbar->Value;
	img_obj.setk(k);
	string strmk = to_string(k);
	System::String^ strm1k = gcnew System::String(strmk.c_str());
	outputbox->AppendText("\r\nK =");
	outputbox->AppendText(strm1k);
    //function calls to open the file and populate the image array
	img_obj.openfile(img_obj.image, img_obj.in);
    //function call to the dynamic median blur function with the kernal value is passed from the kernal trackbar
	img_obj.medianBlur_dyn(img_obj.image, img_obj.Med_image, img_obj.getk());
    //input stream is closed to maintain inout integrity after evevery updateand not overwrite
	img_obj.in.close();
}
//save button to save individual images for brightness and contrast
private: System::Void savebcbtn_Click(System::Object^ sender, System::EventArgs^ e) {
    //fucntioncall to the appropriate save function
	img_obj.savefiles_bc(img_obj.new_image);
	
}
//save button to save individual images for median filter
private: System::Void savemfbtn_Click(System::Object^ sender, System::EventArgs^ e) {
    //fucntioncall to the appropriate save function
	img_obj.savefiles_mf(img_obj.Med_image);
}
};
}
