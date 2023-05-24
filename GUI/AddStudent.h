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
	/// Summary for AddStudent
	/// </summary>
	public ref class AddStudent : public System::Windows::Forms::Form
	{
	public:
		AddStudent(void)
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
		~AddStudent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBoxID;
	protected:
	private: System::Windows::Forms::TextBox^ textBoxName;
	private: System::Windows::Forms::TextBox^ textBoxMaxHoursAllowed;
	private: System::Windows::Forms::TextBox^ textBoxGPA;
	private: System::Windows::Forms::TextBox^ textBoxAcademicYear;
	private: System::Windows::Forms::TextBox^ textBoxPass;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBoxCourseName;
	private: System::Windows::Forms::TextBox^ textBoxGrade;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBoxCourseInProgress;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label12;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddStudent::typeid));
			this->textBoxID = (gcnew System::Windows::Forms::TextBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMaxHoursAllowed = (gcnew System::Windows::Forms::TextBox());
			this->textBoxGPA = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAcademicYear = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPass = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxCourseName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxGrade = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBoxCourseInProgress = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBoxID
			// 
			this->textBoxID->Location = System::Drawing::Point(347, 87);
			this->textBoxID->Name = L"textBoxID";
			this->textBoxID->Size = System::Drawing::Size(100, 22);
			this->textBoxID->TabIndex = 0;
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(347, 144);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(100, 22);
			this->textBoxName->TabIndex = 1;
			// 
			// textBoxMaxHoursAllowed
			// 
			this->textBoxMaxHoursAllowed->Location = System::Drawing::Point(347, 435);
			this->textBoxMaxHoursAllowed->Name = L"textBoxMaxHoursAllowed";
			this->textBoxMaxHoursAllowed->Size = System::Drawing::Size(100, 22);
			this->textBoxMaxHoursAllowed->TabIndex = 2;
			// 
			// textBoxGPA
			// 
			this->textBoxGPA->Location = System::Drawing::Point(347, 346);
			this->textBoxGPA->Name = L"textBoxGPA";
			this->textBoxGPA->Size = System::Drawing::Size(100, 22);
			this->textBoxGPA->TabIndex = 3;
			// 
			// textBoxAcademicYear
			// 
			this->textBoxAcademicYear->Location = System::Drawing::Point(347, 282);
			this->textBoxAcademicYear->Name = L"textBoxAcademicYear";
			this->textBoxAcademicYear->Size = System::Drawing::Size(100, 22);
			this->textBoxAcademicYear->TabIndex = 4;
			// 
			// textBoxPass
			// 
			this->textBoxPass->Location = System::Drawing::Point(347, 217);
			this->textBoxPass->Name = L"textBoxPass";
			this->textBoxPass->Size = System::Drawing::Size(100, 22);
			this->textBoxPass->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(14, 82);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 27);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Student id:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(14, 139);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(166, 27);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Student name :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(14, 212);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(199, 27);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Student password:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(14, 277);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(247, 27);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Student academic year:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::Control;
			this->label5->Location = System::Drawing::Point(14, 341);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(146, 27);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Student GPA:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::Control;
			this->label6->Location = System::Drawing::Point(14, 430);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(296, 27);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Student Max hours allowed:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::Control;
			this->label7->Location = System::Drawing::Point(609, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(248, 37);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Finished courses";
			// 
			// textBoxCourseName
			// 
			this->textBoxCourseName->Location = System::Drawing::Point(793, 87);
			this->textBoxCourseName->Name = L"textBoxCourseName";
			this->textBoxCourseName->Size = System::Drawing::Size(100, 22);
			this->textBoxCourseName->TabIndex = 13;
			// 
			// textBoxGrade
			// 
			this->textBoxGrade->Location = System::Drawing::Point(793, 165);
			this->textBoxGrade->Name = L"textBoxGrade";
			this->textBoxGrade->Size = System::Drawing::Size(100, 22);
			this->textBoxGrade->TabIndex = 14;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::Control;
			this->label8->Location = System::Drawing::Point(611, 82);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(141, 27);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Course code:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::Control;
			this->label9->Location = System::Drawing::Point(611, 160);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(153, 27);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Course Grade:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::Control;
			this->label10->Location = System::Drawing::Point(609, 230);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(298, 37);
			this->label10->TabIndex = 17;
			this->label10->Text = L"In progress courses:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::Control;
			this->label11->Location = System::Drawing::Point(611, 328);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(141, 27);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Course code:";
			// 
			// textBoxCourseInProgress
			// 
			this->textBoxCourseInProgress->Location = System::Drawing::Point(793, 333);
			this->textBoxCourseInProgress->Name = L"textBoxCourseInProgress";
			this->textBoxCourseInProgress->Size = System::Drawing::Size(100, 22);
			this->textBoxCourseInProgress->TabIndex = 19;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(1032, 435);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 32);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Add student !";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AddStudent::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Location = System::Drawing::Point(965, 124);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 23);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Add course";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &AddStudent::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Location = System::Drawing::Point(965, 332);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 23);
			this->button3->TabIndex = 23;
			this->button3->Text = L"Add Course";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &AddStudent::button3_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label12->Location = System::Drawing::Point(12, 9);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(314, 41);
			this->label12->TabIndex = 24;
			this->label12->Text = L"Add New Student";
			// 
			// AddStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1221, 508);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxCourseInProgress);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBoxGrade);
			this->Controls->Add(this->textBoxCourseName);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxPass);
			this->Controls->Add(this->textBoxAcademicYear);
			this->Controls->Add(this->textBoxGPA);
			this->Controls->Add(this->textBoxMaxHoursAllowed);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->textBoxID);
			this->Name = L"AddStudent";
			this->Text = L"AddStudent";
			this->ResumeLayout(false);
			this->PerformLayout();

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
				Studentdata << Name << " " << Email << " " << pass << " " << s.ID << " " << s.AcademicYear << " " << s.GPA<<" "<< s.MaxHoursAllowed <<" "<< std::endl;
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
					Studentdata <<code << " ";
				}
				Studentdata << std::endl;

			}
			
		}


















		bool shouldContinue = true;
		bool shouldContinue2 = true;
		// Prompt user for finished courses
		System::Collections::Generic::Dictionary<String^, String^>^ studFinishedCourses = gcnew System::Collections::Generic::Dictionary<String^, String^>();
		System::Collections::Generic::List<String^>^ studCoursesInProgress = gcnew System::Collections::Generic::List<String^>();





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




		// Declare variables for user input
		int id, AcademicYear, StudMaxHoursAllowed;
		String^ names, ^pass, ^emails;

		// Prompt user for student ID and check if it already exists
		id = Convert::ToInt32(textBoxID->Text);

		for each (Students ^ student in allstudents)
		{
			if (id == student->ID)
			{
				MessageBox::Show("this student already exists");
				return;
			}
		}

		// Prompt user for student name and password
		names = textBoxName->Text;
		pass = textBoxPass->Text;

		// Prompt user for academic year, GPA, and maximum allowed hours
		AcademicYear = Convert::ToInt32(textBoxAcademicYear->Text);
		float GPA = Convert::ToSingle(textBoxGPA->Text);
		StudMaxHoursAllowed = Convert::ToInt32(textBoxMaxHoursAllowed->Text);

		
		
		

		// Prompt user for courses in progress
		System::Collections::Generic::List<Courses>^ neededcourses = gcnew System::Collections::Generic::List<Courses>();
		
		

		for each (String ^ course in studCoursesInProgress) {
			for each (Courses courseObj in  allcourses)
			{
				if (course == courseObj.code)
				{
					neededcourses->Add(courseObj);
				}
			}
		}

		// Generate email address for student
		emails = names + id.ToString() + "@cis.asu.edu.eg";

	//Create new student object and add to the list of all students
		Students s = {names,emails,pass,id,StudMaxHoursAllowed,AcademicYear,GPA,neededcourses,studFinishedCourses};
		allstudents->Add(s);

		// Display confirmation message
		MessageBox::Show("Student added successfully.");

		WriteStudentData(allstudents);
		WriteInProgressCourses(allstudents);
		WriteFinishedCoursesData(allstudents);


























	}
public: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ CourseName, ^ Grade;
	CourseName = textBoxCourseName->Text;
	Grade = textBoxGrade->Text;
	if (studFinishedCourses->ContainsKey(CourseName)) {
		// Prompt user to confirm if they want to overwrite the existing grade
		if (MessageBox::Show("This course already exists. Do you want to overwrite the grade?", "Confirmation", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
			studFinishedCourses[CourseName] = Grade;
		}
	}
	else {
		studFinishedCourses->Add(CourseName, Grade);
	}
	// Ask the user if they want to add another course
	if (MessageBox::Show("Do you want to add another course?", "Confirmation finished", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
		shouldContinue = 1;
	}
	else {
		// If the user clicked No, return false to break out of the loop
		shouldContinue = 0;
	}
}
public: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ CourseName;
	CourseName = textBoxCourseInProgress->Text;
	studCoursesInProgress->Add(CourseName);
	if (MessageBox::Show("Do you want to add another course?", "Confirmation in prog", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
		shouldContinue2 = 1;
	}
	else {
		// If the user clicked No, return false to break out of the loop
		shouldContinue2 = 0;
	}
}
};
}
