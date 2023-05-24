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

namespace GUITrial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentPage
	/// </summary>
	
	public ref class StudentPage : public System::Windows::Forms::Form
	{
	public:
		StudentPage(void)
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
		~StudentPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ListBox^ Instructors;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox3;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentPage::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Instructors = (gcnew System::Windows::Forms::ListBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Location = System::Drawing::Point(3, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(522, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome to Student Portal";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(101, 99);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(281, 30);
			this->button1->TabIndex = 1;
			this->button1->Text = L"View all available courses";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &StudentPage::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlText;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Location = System::Drawing::Point(238, 212);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(204, 28);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Register !";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &StudentPage::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Location = System::Drawing::Point(5, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(534, 44);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Enter Course name to register :";
			// 
			// Instructors
			// 
			this->Instructors->BackColor = System::Drawing::SystemColors::MenuBar;
			this->Instructors->FormattingEnabled = true;
			this->Instructors->ItemHeight = 16;
			this->Instructors->Location = System::Drawing::Point(253, 97);
			this->Instructors->Name = L"Instructors";
			this->Instructors->Size = System::Drawing::Size(120, 84);
			this->Instructors->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(289, 225);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(135, 22);
			this->textBox2->TabIndex = 6;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Location = System::Drawing::Point(561, 101);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(18, 17);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->UseVisualStyleBackColor = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(22, 206);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(252, 44);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Course Hours:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(383, 82);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(165, 44);
			this->label4->TabIndex = 9;
			this->label4->Text = L"elective :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::Control;
			this->label5->Location = System::Drawing::Point(22, 82);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(218, 44);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Instructors :";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Black;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Location = System::Drawing::Point(291, 364);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(204, 28);
			this->button3->TabIndex = 11;
			this->button3->Text = L"filter";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &StudentPage::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Black;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::Control;
			this->button4->Location = System::Drawing::Point(321, 382);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(204, 30);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Edit passsword";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &StudentPage::button4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::Control;
			this->label6->Location = System::Drawing::Point(19, 116);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(491, 44);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Confirm your old password :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::Control;
			this->label7->Location = System::Drawing::Point(19, 233);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(458, 44);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Enter your new password :";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(531, 252);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(142, 22);
			this->textBox4->TabIndex = 16;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlText;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::Control;
			this->button5->Location = System::Drawing::Point(101, 175);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(281, 30);
			this->button5->TabIndex = 17;
			this->button5->Text = L"View your courses";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &StudentPage::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlText;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::Control;
			this->button6->Location = System::Drawing::Point(101, 256);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(281, 30);
			this->button6->TabIndex = 18;
			this->button6->Text = L"View your grades and GPA";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &StudentPage::button6_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Location = System::Drawing::Point(-2, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(552, 565);
			this->panel1->TabIndex = 19;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ControlText;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::Control;
			this->button9->Location = System::Drawing::Point(101, 493);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(281, 30);
			this->button9->TabIndex = 21;
			this->button9->Text = L"Filter Courses";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &StudentPage::button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ControlText;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::Control;
			this->button8->Location = System::Drawing::Point(101, 421);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(281, 30);
			this->button8->TabIndex = 20;
			this->button8->Text = L"Edit your password";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &StudentPage::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlText;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::Control;
			this->button7->Location = System::Drawing::Point(101, 345);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(281, 30);
			this->button7->TabIndex = 19;
			this->button7->Text = L"Register for a course";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &StudentPage::button7_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->Controls->Add(this->textBox3);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->textBox4);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Location = System::Drawing::Point(610, 36);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(678, 471);
			this->panel3->TabIndex = 5;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Location = System::Drawing::Point(629, 50);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(676, 499);
			this->panel2->TabIndex = 20;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPage::panel2_Paint);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->checkBox1);
			this->panel4->Controls->Add(this->Instructors);
			this->panel4->Controls->Add(this->textBox2);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->button3);
			this->panel4->Location = System::Drawing::Point(597, 50);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(679, 503);
			this->panel4->TabIndex = 17;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(544, 103);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(531, 132);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(142, 22);
			this->textBox3->TabIndex = 17;
			// 
			// StudentPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1353, 561);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Name = L"StudentPage";
			this->Text = L"StudentPage";
			this->Load += gcnew System::EventHandler(this, &StudentPage::StudentPage_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
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
			System::String^ name;
			System::String^ code;
			bool elective;
			int Max_Number_Of_Students;
			System::Collections::Generic::List<String^>^ Prerequisite;
			int hours;
			System::String^ instructor;

		};

		value struct Students
		{
			System::String^ name, ^ email, ^ password;
			int ID, MaxHoursAllowed, AcademicYear;
			float GPA;
			System::Collections::Generic::List<Courses>^ CoursesInProgress;
			System::Collections::Generic::Dictionary<String^, String^>^ FinishedCourses;
		};





		//functions 

		System::Collections::Generic::List<String^>^ readprereq(String^ code) {

			//Stores the id of the given vector and the ids of all pre requests
			System::Collections::Generic::List<String^ >^ CoursesIds = gcnew System::Collections::Generic::List<String^>();

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
				System::Collections::Generic::List<String^>^ prereq = readprereq(code);
				Courses c = { name,code,elec,Max_Number_Of_Students,prereq,hours,Instructor };
				vec->Add(c);
			}
			return vec;




		}





		System::Collections::Generic::List<Courses>^ ReadInProgressCourses(int ID, System::Collections::Generic::List<Courses>^ allcourses)
		{
			//Reading the file
			std::ifstream datafile("StudentsCoursesInProgress.txt");

			//a string containg a line to iterate on each line
			std::string line;

			//loop on every line and store the first element as our course id and the other element in a vector for the courses pre requests ids
			System::Collections::Generic::List<String^>^ coursescodes = gcnew System::Collections::Generic::List<String^>();

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
			System::Collections::Generic::List<Courses>^ neededcourses = gcnew System::Collections::Generic::List<Courses>();
			for each (String ^ i in coursescodes) {

				for each (Courses j in allcourses)
				{
					if (j.code == i) {
						neededcourses->Add(j);
					}
				}


			}

			return neededcourses;
		}







		System::Collections::Generic::Dictionary<String^, String^>^ ReadFinishedCourses(int ID)
		{

			//Reading the file
			std::ifstream datafile("StudentsFinishedCourses.txt");

			//a string containg a line to iterate on each line
			std::string line;
			System::Collections::Generic::Dictionary<String^, String^>^ finishedcourses = gcnew System::Collections::Generic::Dictionary<String^, String^>();;

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

#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Collections::Generic::List<Courses>^ allcourses = readcoursedata();
		System::Collections::Generic::List<Students>^ allstudents = readstudentdata(allcourses);
		System::Collections::Generic::Dictionary<String^, System::Collections::Generic::List<int>^> enrolledstudentsid;
		for each (Courses course in allcourses) {
			enrolledstudentsid.Add(course.code, gcnew System::Collections::Generic::List<int>());
		}

		// Populate the dictionary with enrolled students
		for each (Students student in allstudents) {
			for each (Courses course in student.CoursesInProgress) {
				enrolledstudentsid[course.code]->Add(student.ID);
			}
		}
		// Initialize variables
	
		int stdthours = 0;
		System::Collections::Generic::List<String^>^ Finished_Courses_vector = gcnew System::Collections::Generic::List<String^>();
		bool inprog = 0, finished = 0, maxnumber = 0, maxhoures = 0, prereq = 0;
		Students stdt;
		std::ifstream datafile("Userindex.txt");
		std::string line;
		int first;
		//loop on every line and store the first element as our course id and the other element in a vector for the courses pre requests ids
		while (getline(datafile, line)) {
			// Creating a pointer to 
			std::istringstream iss(line);

			// read the first element

			iss >> first;
		}
		int studentid = first;
		stdt = allstudents[studentid];
		String^courses = "Your available courses are: \n";

		for each (Courses c in allcourses) {
			inprog = 0, finished = 0, maxnumber = 0, maxhoures = 0, prereq = 0;
				for each (Courses cour in stdt.CoursesInProgress) {
					if (cour.code == c.code) {
						inprog = 1;
					}
					stdthours += cour.hours;
				}

				for each (System::Collections::Generic::KeyValuePair<String^, String^> finishedCourse in stdt.FinishedCourses)
				{
					if (c.code == finishedCourse.Key) {
						finished = 1;
					}
					Finished_Courses_vector->Add(finishedCourse.Key);
				}


				bool hasnoprereq = 0;
				for each (String ^ s in c.Prerequisite) {
					if (s == "none") {
						hasnoprereq = 1;
						break;
					}
				}

				if (!hasnoprereq) {
					prereq = 0;
					for each (String ^ s in c.Prerequisite) {
						bool found = 0;
						for each (String ^ x in Finished_Courses_vector) {
							if (s == x) {
								found = 1;
								break;
							}
						}
						if (found == 0) {
							prereq = 1;
							break;
						}
					}
				}

				if ((stdthours + c.hours) > stdt.MaxHoursAllowed) {
					maxhoures = 1;
				}
				int no_of_enrolled_students = enrolledstudentsid[c.code]->Count;
				if (no_of_enrolled_students >= c.Max_Number_Of_Students) {
					maxnumber = 1;
				}

				if (maxhoures == 0 && maxnumber == 0 && finished == 0 && inprog == 0 && prereq == 0) {
					courses += c.name + " ";
				}
				else {
					continue;
				}
				
			}

		MessageBox::Show(courses);
		

		





	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Collections::Generic::List<Courses>^ allcourses = readcoursedata();
		System::Collections::Generic::List<Students>^ allstudents = readstudentdata(allcourses);
		
		System::Collections::Generic::Dictionary<String^, System::Collections::Generic::List<int>^> enrolledstudentsid;
		for each (Courses course in allcourses) {
			enrolledstudentsid.Add(course.code, gcnew System::Collections::Generic::List<int>());
		}

		// Populate the dictionary with enrolled students
		for each (Students student in allstudents) {
			for each (Courses course in student.CoursesInProgress) {
				enrolledstudentsid[course.code]->Add(student.ID);
			}
		}
		// Initialize variables

		int stdthours = 0;
		System::Collections::Generic::List<String^>^ Finished_Courses_vector = gcnew System::Collections::Generic::List<String^>();
		bool inprog = 0, finished = 0, maxnumber = 0, maxhoures = 0, prereq = 0;
		Students stdt;
		std::ifstream datafile("Userindex.txt");
		std::string line;
		int first;
		//loop on every line and store the first element as our course id and the other element in a vector for the courses pre requests ids
		while (getline(datafile, line)) {
			// Creating a pointer to 
			std::istringstream iss(line);

			// read the first element

			iss >> first;
		}
		int studentid = first;
		stdt = allstudents[studentid];
		System::Collections::Generic::List<Courses >^ AvailableCourses = gcnew System::Collections::Generic::List<Courses>();

		for each (Courses c in allcourses) {
			inprog = 0, finished = 0, maxnumber = 0, maxhoures = 0, prereq = 0;
			for each (Courses cour in stdt.CoursesInProgress) {
				if (cour.code == c.code) {
					inprog = 1;
				}
				stdthours += cour.hours;
			}

			for each (System::Collections::Generic::KeyValuePair<String^, String^> finishedCourse in stdt.FinishedCourses)
			{
				if (c.code == finishedCourse.Key) {
					finished = 1;
				}
				Finished_Courses_vector->Add(finishedCourse.Key);
			}


			bool hasnoprereq = 0;
			for each (String ^ s in c.Prerequisite) {
				if (s == "none") {
					hasnoprereq = 1;
					break;
				}
			}

			if (!hasnoprereq) {
				prereq = 0;
				for each (String ^ s in c.Prerequisite) {
					bool found = 0;
					for each (String ^ x in Finished_Courses_vector) {
						if (s == x) {
							found = 1;
							break;
						}
					}
					if (found == 0) {
						prereq = 1;
						break;
					}
				}
			}

			if ((stdthours + c.hours) > stdt.MaxHoursAllowed) {
				maxhoures = 1;
			}
			int no_of_enrolled_students = enrolledstudentsid[c.code]->Count;
			if (no_of_enrolled_students >= c.Max_Number_Of_Students) {
				maxnumber = 1;
			}

			if (maxhoures == 0 && maxnumber == 0 && finished == 0 && inprog == 0 && prereq == 0) {
				AvailableCourses->Add(c);
			}
			else {
				continue;
			}

		}

		String^ Coursetoreg = textBox1->Text;
		bool donee = 0;
		for each (Courses c in AvailableCourses) {
			if (c.name == Coursetoreg) {
				allstudents[studentid].CoursesInProgress->Add(c);
				donee = 1;
				MessageBox::Show("Done the course is now in progress !");
				WriteStudentData(allstudents);
				WriteInProgressCourses(allstudents);
				return;
			}
		}
		if (!donee) {
			MessageBox::Show("The course is not available to you or is not in our system");
		}
		

	}
	
private: System::Void StudentPage_Load(System::Object^ sender, System::EventArgs^ e) {
	System::Collections::Generic::List<Courses>^ allcourses = readcoursedata();
	System::Collections::Generic::List<Students>^ allstudents = readstudentdata(allcourses);
	System::Collections::Generic::List<String^>^ insturtornames = gcnew System::Collections::Generic::List<String^>();
	
	
	
	
	for each (Courses c  in allcourses) {
		insturtornames->Add(c.instructor);
	}
	Instructors->DataSource = insturtornames;
	panel2->Hide();
	panel3->Hide();
	panel4->Hide();

	

	
	
	


}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ifstream datafile("stdname.txt");
	std::string first;
	System::Collections::Generic::List<Courses>^ allcourses = readcoursedata();
	bool elec = checkBox1->Checked;
	String ^selectedValue = dynamic_cast<String^>(Instructors->SelectedItem);
	int hours= System::Convert::ToInt32(textBox2->Text);
	String^ filtered = "The courses are :\n";
	for each (Courses c in allcourses) {
		if (c.hours == hours && c.elective == elec && c.instructor == selectedValue) {
			filtered += c.name + " ";
		}
	}
	MessageBox::Show(filtered);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Collections::Generic::List<Courses>^ allcourses = readcoursedata();
	System::Collections::Generic::List<Students>^ allstudents = readstudentdata(allcourses);
	std::ifstream datafile("Userindex.txt");
	std::string line;
	int first;
	//loop on every line and store the first element as our course id and the other element in a vector for the courses pre requests ids
	while (getline(datafile, line)) {
		// Creating a pointer to 
		std::istringstream iss(line);

		// read the first element

		iss >> first;
	}
	int studentid = first;
	
	String^ email = allstudents[studentid].email;
	String^ oldpass = textBox3->Text;
	String^ Pass = allstudents[studentid].password;
	
	if (Pass == oldpass) {
		String^ Name = allstudents[studentid].name;
		int id = allstudents[studentid].ID;
		int maxhours = allstudents[studentid].MaxHoursAllowed;
		int academicyear = allstudents[studentid].AcademicYear;
		float gpa = allstudents[studentid].GPA;
		System::Collections::Generic::List<Courses>^ CoursesinProgress = allstudents[studentid].CoursesInProgress;
		System::Collections::Generic::Dictionary<String^, String^>^ FinishedCourses = allstudents[studentid].FinishedCourses;
		String ^ password = textBox4->Text;
		
		for each (Students s in allstudents) {
			if (s.email == email) {
				allstudents->Remove(s);
				MessageBox::Show("Password updated succesfully");
				break;
			}
		}
		Students st = { Name,email,password,id,maxhours,academicyear,gpa,CoursesinProgress ,FinishedCourses };
		allstudents->Add(st);

		int ind = -1;
		std::ofstream Studentdata("Userindex.txt");
		for each (Students s in allstudents) {
			ind++;
			if (s.email == email) {
				Studentdata << ind;
				break;
			}

		}
		WriteStudentData(allstudents);
	}
	else {
		MessageBox::Show("Wrong Password !");
		return;
	}
	
	
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	System::Collections::Generic::List<Courses>^ allcourses = readcoursedata();
	System::Collections::Generic::List<Students>^ allstudents = readstudentdata(allcourses);
	std::ifstream datafile("Userindex.txt");
	std::string line;
	int first;
	//loop on every line and store the first element as our course id and the other element in a vector for the courses pre requests ids
	while (getline(datafile, line)) {
		// Creating a pointer to 
		std::istringstream iss(line);

		// read the first element

		iss >> first;
	}
	int studentid = first;
	String^ finishedMessage = "Your finished courses are:\n";
	System::Collections::Generic::Dictionary<String^, String^>^ finishedCourses = allstudents[studentid].FinishedCourses;
	if (finishedCourses->Count == 0) {
		finishedMessage += "No finished courses\n";
	}
	else {
		for each (System::Collections::Generic::KeyValuePair<String^, String^> finishedCourse in finishedCourses) {
			finishedMessage += finishedCourse.Key + "\n";
		}
	}
	MessageBox::Show(finishedMessage);
	String^ inProgressMessage = "Your in-progress courses are:\n";
	System::Collections::Generic::List<Courses>^ inProgressCourses = allstudents[studentid].CoursesInProgress;

	if (inProgressCourses->Count == 0) {
		inProgressMessage += "No in-progress courses\n";
	}
	else {
		for each (Courses ^ inProgressCourse in inProgressCourses) {
			inProgressMessage += inProgressCourse->code + "\n";
		}
	}
	MessageBox::Show(inProgressMessage);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Collections::Generic::List<Courses>^ allcourses = readcoursedata();
	System::Collections::Generic::List<Students>^ allstudents = readstudentdata(allcourses);
	std::ifstream datafile("Userindex.txt");
	std::string line;
	int first;
	//loop on every line and store the first element as our course id and the other element in a vector for the courses pre requests ids
	while (getline(datafile, line)) {
		// Creating a pointer to 
		std::istringstream iss(line);

		// read the first element

		iss >> first;
	}
	int studentid = first;
	String^ finishedMessage = "Your finished courses are:\n";
	System::Collections::Generic::Dictionary<String^, String^>^ finishedCourses = allstudents[studentid].FinishedCourses;
	if (finishedCourses->Count == 0) {
		finishedMessage += "No finished courses\n";
	}
	else {
		for each (System::Collections::Generic::KeyValuePair<String^, String^> finishedCourse in finishedCourses) {
			finishedMessage += finishedCourse.Key +" "+ finishedCourse.Value+"\n";
		}
	}
	finishedMessage += "Your GPA Is :" + allstudents[studentid].GPA;
	MessageBox::Show(finishedMessage);
}


private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	panel2->Show();
	panel3->Hide();
	panel4->Hide();
}

private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	panel2->Hide();
	panel3->Show();
	panel4->Hide();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	panel2->Hide();
	panel3->Hide();
	panel4->Show();
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};

}
