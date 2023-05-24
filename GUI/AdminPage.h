#pragma once

#include<iostream>
#include<string>
#include<fstream>
#include <vector>
#include<map>
#include <msclr\marshal_cppstd.h>
#include<Windows.h>
#include<MMsystem.h>
#include<stdio.h>
#include <sstream>
#include <msclr/marshal_cppstd.h>
#include "AddStudent.h"
#include "AddCourse.h"
#include"EditCourse.h"













namespace GUITrial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminPage
	/// </summary>
	public ref class AdminPage : public System::Windows::Forms::Form
	{
	public:
		AdminPage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ studentIDTextBox;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ courseCodeTextBox;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ courseGradeTextBox;



	private: System::ComponentModel::IContainer^ components;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminPage::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->studentIDTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->courseCodeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->courseGradeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(198, 298);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(248, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"View Students Enrolled";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AdminPage::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(3, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(398, 44);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Enter the course code :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(48, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(372, 44);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Enter the Student id :";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Location = System::Drawing::Point(198, 278);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(245, 36);
			this->button2->TabIndex = 5;
			this->button2->Text = L"View student finished courses";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &AdminPage::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Location = System::Drawing::Point(198, 355);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(245, 35);
			this->button3->TabIndex = 7;
			this->button3->Text = L"View student in progress courses";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &AdminPage::button3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label3->Location = System::Drawing::Point(-6, -5);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(487, 41);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Welcome to Admin Panel ! ";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Location = System::Drawing::Point(139, 282);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(206, 26);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Add Student";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &AdminPage::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->Location = System::Drawing::Point(139, 356);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(206, 23);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Add course";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &AdminPage::button5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(16, 61);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(358, 44);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Enter the student id:";
			// 
			// studentIDTextBox
			// 
			this->studentIDTextBox->Location = System::Drawing::Point(447, 80);
			this->studentIDTextBox->Name = L"studentIDTextBox";
			this->studentIDTextBox->Size = System::Drawing::Size(147, 22);
			this->studentIDTextBox->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::Control;
			this->label5->Location = System::Drawing::Point(16, 161);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(388, 44);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Enter the course code:";
			// 
			// courseCodeTextBox
			// 
			this->courseCodeTextBox->Location = System::Drawing::Point(452, 183);
			this->courseCodeTextBox->Name = L"courseCodeTextBox";
			this->courseCodeTextBox->Size = System::Drawing::Size(142, 22);
			this->courseCodeTextBox->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::Control;
			this->label6->Location = System::Drawing::Point(16, 255);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(407, 44);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Enter the course Grade:";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Black;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->ForeColor = System::Drawing::SystemColors::Control;
			this->button6->Location = System::Drawing::Point(237, 412);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(206, 23);
			this->button6->TabIndex = 17;
			this->button6->Text = L"Add Grade";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &AdminPage::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button7->Location = System::Drawing::Point(139, 444);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(206, 23);
			this->button7->TabIndex = 18;
			this->button7->Text = L"Edit course";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &AdminPage::button7_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(487, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(724, 523);
			this->panel1->TabIndex = 19;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(455, 83);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 3;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Location = System::Drawing::Point(487, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(721, 535);
			this->panel2->TabIndex = 21;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(458, 80);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 8;
			// 
			// button8
			// 
			this->button8->AccessibleDescription = L"";
			this->button8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button8->Location = System::Drawing::Point(139, 50);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(206, 27);
			this->button8->TabIndex = 20;
			this->button8->Text = L"View enrolled students";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &AdminPage::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button9->Location = System::Drawing::Point(142, 116);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(206, 28);
			this->button9->TabIndex = 22;
			this->button9->Text = L"View students courses";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &AdminPage::button9_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel3->Controls->Add(this->courseGradeTextBox);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->studentIDTextBox);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->courseCodeTextBox);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->button6);
			this->panel3->Location = System::Drawing::Point(487, 4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(729, 532);
			this->panel3->TabIndex = 8;
			// 
			// courseGradeTextBox
			// 
			this->courseGradeTextBox->Location = System::Drawing::Point(452, 274);
			this->courseGradeTextBox->Name = L"courseGradeTextBox";
			this->courseGradeTextBox->Size = System::Drawing::Size(142, 22);
			this->courseGradeTextBox->TabIndex = 18;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button10->Location = System::Drawing::Point(139, 197);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(206, 27);
			this->button10->TabIndex = 23;
			this->button10->Text = L"Add Grade";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &AdminPage::button10_Click);
			// 
			// panel4
			// 
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel4->Controls->Add(this->button8);
			this->panel4->Controls->Add(this->button9);
			this->panel4->Controls->Add(this->button10);
			this->panel4->Controls->Add(this->button4);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->button7);
			this->panel4->Controls->Add(this->button5);
			this->panel4->Location = System::Drawing::Point(0, 9);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(487, 619);
			this->panel4->TabIndex = 24;
			// 
			// AdminPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1215, 546);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"AdminPage";
			this->Text = L"AdminPage";
			this->Load += gcnew System::EventHandler(this, &AdminPage::AdminPage_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);

		}
		public:

		value struct Admins
		{
			System::String^ name;
			System::String^ password;
		};

		value struct Courses {
			System::String ^name;
			System::String ^code;
			bool elective;
			int Max_Number_Of_Students;
			System::Collections::Generic::List<String^>^ Prerequisite;
			int hours;
			System::String ^instructor;

		};

		value struct Students
		{
			System::String ^name,^email,^password;
			int ID, MaxHoursAllowed, AcademicYear;
			float GPA;
			System::Collections::Generic::List<Courses>^ CoursesInProgress;
			System::Collections::Generic::Dictionary<String^, String^>^ FinishedCourses;
		};


		


		//functions 

		System::Collections::Generic::List<String^>^ readprereq(String^ code) {

			//Stores the id of the given vector and the ids of all pre requests
			System::Collections::Generic::List<String^ >^ CoursesIds= gcnew System::Collections::Generic::List<String^>();

			//Reading the file
			std::ifstream datafile("precourses.txt");

			//a string containg a line to iterate on each line
			std::string line;
			std::string first;
			std::string Code = msclr::interop::marshal_as<std::string>(code);
			//loop on every line and store the first element as our course id and the other element in a vector for the courses pre requests ids
			while (getline(datafile, line)) {
				// Creating a pointer to 
			std::istringstream iss(line);

				// read the first element

				iss >> first;
				if (Code == first) {
					//getting the pre requests courses as the vector
					std::string code;
					while (iss >> code) {
						System::String^ Code = gcnew System::String(code.c_str());
						CoursesIds->Add(Code);
					}
					break;
				}
				else
				{
					continue;
				}


			}
			return CoursesIds;

		}






		System::Collections::Generic::List<Courses>^ readcoursedata() {
			System::Collections::Generic::List<Courses>^ vec = gcnew System::Collections::Generic::List<Courses>();

			//Variables to be filled from the file
			bool elec;
			int Max_Number_Of_Students;
			int hours;
			std::string instructor, Name, Code;

			//Reading the file
			std::ifstream datafile("Coursedata.txt");


			//Reading each line and filling the courses vector
			while (datafile >> Name >> Code >> instructor >> hours >> Max_Number_Of_Students >> elec) {
				System::String^ name = gcnew System::String(Name.c_str());
				System::String^ code = gcnew System::String(Code.c_str());
				System::String^ Instructor = gcnew System::String(instructor.c_str());
				System::Collections::Generic::List<String^> ^ prereq = readprereq(code);
				Courses c = {name,code,elec,Max_Number_Of_Students,prereq,hours,Instructor };
				vec->Add(c);
			}
			return vec;




		}





	System::Collections::Generic::List<Courses>^ ReadInProgressCourses(int ID, System::Collections::Generic::List<Courses> ^allcourses)
	{
	//Reading the file
	std::ifstream datafile("StudentsCoursesInProgress.txt");

	//a string containg a line to iterate on each line
	std::string line;

	//loop on every line and store the first element as our course id and the other element in a vector for the courses pre requests ids
	System::Collections::Generic::List<String^>^ coursescodes= gcnew System::Collections::Generic::List<String^>();

	while (getline(datafile, line)) {
		// Creating a pointer to 
		std::istringstream iss(line);

		// read the first element
		int studentid;
		iss >> studentid;

		if (ID == studentid) {
			//getting the enrolledcourses codes as the vector
			std::string code;
			while (iss >> code) {
				System::String^ Code = gcnew System::String(code.c_str());
				coursescodes->Add(Code);
			}
			break;
		}
		else {
			continue;
		}

	}
	//the vector in which we will add all the enrolled courses to set to the index we found aboves
	System::Collections::Generic::List<Courses>^ neededcourses=gcnew System::Collections::Generic::List<Courses> ();
	for each (String^ i in coursescodes) {

		for each (Courses j in allcourses)
			{
			if (j.code==i) {
				neededcourses->Add(j);
			}
			}


	}

	return neededcourses;
}







	System::Collections::Generic::Dictionary<String^, String^> ^ReadFinishedCourses(int ID)
	{

		//Reading the file
		std::ifstream datafile("StudentsFinishedCourses.txt");

		//a string containg a line to iterate on each line
		std::string line;
		System::Collections::Generic::Dictionary<String^, String^> ^finishedcourses= gcnew System::Collections::Generic::Dictionary<String^, String^>();;

		//loop on every line and store the first element as our course id and the other element in a vector for the courses pre requests ids
		while (getline(datafile, line)) {
			// Creating a pointer to 
			std::istringstream iss(line);

			// read the first element
			int studentid;
			iss >> studentid;

			if (studentid == ID) {
				//storing the course code and its grade
				std::string code;
				std::string grade;
				while (iss >> code >> grade) {
					System::String^ Code = gcnew System::String(code.c_str());
					System::String^ Grade = gcnew System::String(grade.c_str());
					finishedcourses->Add(Code, Grade);
				}
				break;
			}
			else {
				continue;
			}

		}

		return finishedcourses;
	}




	System::Collections::Generic::List<Students>^ readstudentdata(System::Collections::Generic::List<Courses>^ allcourses) {

		System::Collections::Generic::List<Students>^ vec = gcnew System::Collections::Generic::List<Students>();

		//Reading the file
		std::ifstream datafile("stddata.txt");

		//Variables to be filled from the file
		std::string Name, Email, Password;
		int ID, Academicyear, Maxhoursallowed;
		float GPA;

		//Reading each line and filling the students vector
		while (datafile >> Name >> Email >> Password >> ID >> Academicyear >> GPA >> Maxhoursallowed) {

			System::Collections::Generic::List<Courses>^ CoursesinProgress = ReadInProgressCourses(ID, allcourses);
			System::Collections::Generic::Dictionary<String^, String^>^ FinishedCourses = ReadFinishedCourses(ID);
			System::String^ name = gcnew System::String(Name.c_str());
			System::String^ email = gcnew System::String(Email.c_str());
			System::String^ password = gcnew System::String(Password.c_str());
			Students s = { name,email,password,ID,Maxhoursallowed,Academicyear,GPA,CoursesinProgress,FinishedCourses };
			vec->Add(s);
			
		}
		return vec;
	}


	void WriteCourseData(System::Collections::Generic::List<Courses>^ allcourses)
	{
		std::ofstream coursedata("Coursedata.txt");
		for each (Courses c in allcourses) {
			std::string name = msclr::interop::marshal_as<std::string>(c.name);
			std::string code = msclr::interop::marshal_as<std::string>(c.code);
			std::string instructor = msclr::interop::marshal_as<std::string>(c.instructor);
			coursedata << name << " " << code << " " << instructor << " " << c.hours << " " << c.Max_Number_Of_Students << " " << c.elective << " " << std::endl;
		}
	}


	void WritePreReq(System::Collections::Generic::List<Courses>^ allcourses)
	{
		std::ofstream coursedata("precourses.txt");

		for each (Courses c in allcourses) {
			std::string code = msclr::interop::marshal_as<std::string>(c.code);
			coursedata << code << " ";
			for each (String ^ s in c.Prerequisite) {
				std::string code = msclr::interop::marshal_as<std::string>(s);
				coursedata << code << " ";
			}
			coursedata << std::endl;

		}
	}

	void WriteStudentData(System::Collections::Generic::List<Students>^ allstudents)
	{
		std::ofstream Studentdata("stddata.txt");
		for each (Students s in allstudents) {
			std::string Name = msclr::interop::marshal_as<std::string>(s.name);
			std::string Email = msclr::interop::marshal_as<std::string>(s.email);
			std::string pass = msclr::interop::marshal_as<std::string>(s.password);
			Studentdata << Name << " " << Email << " " << pass << " " << s.ID << " " << s.AcademicYear << " " << s.GPA << " " << s.MaxHoursAllowed << " " << std::endl;
		}

	}

	void WriteFinishedCoursesData(System::Collections::Generic::List<Students>^ allstudents)
	{
		std::ofstream Studentdata("StudentsFinishedCourses.txt");
		for each (Students s in allstudents) {
			Studentdata << s.ID << " ";
			for each (System::Collections::Generic::KeyValuePair<String^, String^> ^ kvp in s.FinishedCourses)
			{
				std::string key = msclr::interop::marshal_as<std::string>(kvp->Key);
				std::string value = msclr::interop::marshal_as<std::string>(kvp->Value);
				Studentdata << key << " " << value << " ";
			}
			Studentdata << std::endl;

		}
	}

	void WriteInProgressCourses(System::Collections::Generic::List<Students>^ allstudents)
	{
		std::ofstream Studentdata("StudentsCoursesInProgress.txt");
		for each (Students s in allstudents) {
			Studentdata << s.ID << " ";
			for each (Courses c in s.CoursesInProgress) {
				std::string code = msclr::interop::marshal_as<std::string>(c.code);
				Studentdata << code << " ";
			}
			Studentdata << std::endl;

		}

	}















		
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		

		System::Collections::Generic::List<Courses>^ allcourses = readcoursedata();
		System::Collections::Generic::List<Students>^ allstudents = readstudentdata(allcourses);
		System::Collections::Generic::Dictionary<String^, System::Collections::Generic::List<int>^> enrolledstudents;

		for each (Courses course in allcourses) {
			enrolledstudents.Add(course.code, gcnew System::Collections::Generic::List<int>());
		}

		// Populate the dictionary with enrolled students
		for each (Students student in allstudents) {
			for each (Courses course in student.CoursesInProgress) {
				enrolledstudents[course.code]->Add(student.ID);
			}
		}
		
		


		
		String^ Code = textBox1->Text;

		if (enrolledstudents.ContainsKey(Code)) {

			std::string ids = "The students enrolled are : \n";
			for each (int xx in enrolledstudents[Code]) {
				ids += ", ";
				ids += std::to_string(xx);
				
					
				
			}

			// Display the IDs in a MessageBox
			MessageBox::Show(gcnew String(ids.c_str()),"Ids");
		}
		else {
			// Code not found in dictionary
			MessageBox::Show("This course is not found in the system");
		}


	}
		  

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Collections::Generic::List<Courses>^ allcourses = readcoursedata();
		System::Collections::Generic::List<Students>^ allstudents = readstudentdata(allcourses);
		bool found = 0;
		int id = System::Convert::ToInt32(textBox2->Text);

		for each (Students student in allstudents)
		{
			if (id == System::Convert::ToInt32(student.ID))
			{
				System::Collections::Generic::Dictionary<String^, String^>^ finishedCourses = student.FinishedCourses;

				String^ message = "";
				System::Collections::IDictionaryEnumerator^ enumerator = finishedCourses->GetEnumerator();
				while (enumerator->MoveNext())
				{
					String^ key = safe_cast<String^>(enumerator->Key);
					String^ value = safe_cast<String^>(enumerator->Value);
					message += key + " : " + value + "\n";
				}

				MessageBox::Show(message, "Finished Courses");
				found = 1;
				break;
			}
		}
		if (!found) {
			MessageBox::Show("This student is not in our system", "Finished Courses");
		}
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Collections::Generic::List<Courses>^ allcourses = readcoursedata();
	System::Collections::Generic::List<Students>^ allstudents = readstudentdata(allcourses);
	bool found = 0;
	int id = System::Convert::ToInt32(textBox2->Text);
	for each (Students ^ student in allstudents)
	{
		if (id == student->ID)
		{
			found = 1;
			System::Text::StringBuilder^ coursesInProgress = gcnew System::Text::StringBuilder();
			for each (Courses ^ course in student->CoursesInProgress)
			{
				coursesInProgress->AppendLine(course->name);
			}
			System::Windows::Forms::MessageBox::Show(coursesInProgress->ToString(),"In progress courses");
			break;
		}
	}
	if (!found) {
		MessageBox::Show("Student doesn't exist!");
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	AddStudent^ form3 = gcnew AddStudent();
	form3->Show();
	
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	AddCourse^ form4 = gcnew AddCourse();
	form4->Show();
}


private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Collections::Generic::List<Courses>^ allcourses = readcoursedata();
	System::Collections::Generic::List<Students>^ allstudents = readstudentdata(allcourses);

	bool studentfound = false, coursefound = false;
	int studentindex;
	String^ coursecode = courseCodeTextBox->Text;
	int id = System::Convert::ToInt32(studentIDTextBox->Text);

	for each (Students ^ student in allstudents)
	{
		if (id == student->ID)
		{
			studentfound = true;
			break;
		}
	}

	if (!studentfound)
	{
		MessageBox::Show("Student is not found. Try again!");
		return;
	}

	for each (Students ^ s in allstudents) {
		if (s->ID == id) {
			for each (Courses  course in s->CoursesInProgress)
			{
				if (coursecode == course.code)
				{
					coursefound = true;
					s->CoursesInProgress->Remove(course);
					WriteInProgressCourses(allstudents);
					break;
				}
			}
		}
	}

	if (coursefound && studentfound)
	{
		String^ coursegrade = courseGradeTextBox->Text;

		for each (Students s in allstudents) {
			if (s.ID == id) {
				s.FinishedCourses[coursecode] = coursegrade;
				break;
			}
		}

		WriteStudentData(allstudents);
		WriteFinishedCoursesData(allstudents);
		MessageBox::Show("The grade is added!");

		return;
	}
	else {
		MessageBox::Show("The student doesn't take this course or the course is not available!");
		return;
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	EditCourse^ form5 = gcnew EditCourse();
	form5->Show();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Show();
	panel2->Hide();
	panel3->Hide();
}
private: System::Void AdminPage_Load(System::Object^ sender, System::EventArgs^ e) {
	panel1->Hide();
	panel2->Hide();
	panel3->Hide();
}

private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	panel2->Show();
	panel1->Hide();
	panel3->Hide();
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	panel3->Show();
	panel2->Hide();
	panel1->Hide();
}



};
}







