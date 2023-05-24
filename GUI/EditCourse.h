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
	/// Summary for EditCourse
	/// </summary>
	public ref class EditCourse : public System::Windows::Forms::Form
	{
	public:
		EditCourse(void)
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
		~EditCourse()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::TextBox^ PrereqTextBox;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ instructorTextBox;
	private: System::Windows::Forms::TextBox^ hoursTextBox;
	private: System::Windows::Forms::TextBox^ maxStudentsTextBox;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ codeTextBox;
	private: System::Windows::Forms::CheckBox^ electiveCheckBox;
	private: System::Windows::Forms::TextBox^ nameTextBox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EditCourse::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->PrereqTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->instructorTextBox = (gcnew System::Windows::Forms::TextBox());
			this->hoursTextBox = (gcnew System::Windows::Forms::TextBox());
			this->maxStudentsTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->codeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->electiveCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->nameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlText;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Location = System::Drawing::Point(1018, 127);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 23);
			this->button2->TabIndex = 33;
			this->button2->Text = L"Add Prereq";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &EditCourse::button2_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::SystemColors::Control;
			this->checkBox1->Location = System::Drawing::Point(584, 76);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(186, 31);
			this->checkBox1->TabIndex = 32;
			this->checkBox1->Text = L"Has No PreReq";
			this->checkBox1->UseVisualStyleBackColor = false;
			// 
			// PrereqTextBox
			// 
			this->PrereqTextBox->Location = System::Drawing::Point(816, 127);
			this->PrereqTextBox->Name = L"PrereqTextBox";
			this->PrereqTextBox->Size = System::Drawing::Size(100, 22);
			this->PrereqTextBox->TabIndex = 31;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::Control;
			this->label7->Location = System::Drawing::Point(581, 122);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(229, 27);
			this->label7->TabIndex = 30;
			this->label7->Text = L"Enter PreReq Course :\r\n";
			// 
			// instructorTextBox
			// 
			this->instructorTextBox->Location = System::Drawing::Point(204, 218);
			this->instructorTextBox->Name = L"instructorTextBox";
			this->instructorTextBox->Size = System::Drawing::Size(100, 22);
			this->instructorTextBox->TabIndex = 29;
			// 
			// hoursTextBox
			// 
			this->hoursTextBox->Location = System::Drawing::Point(204, 301);
			this->hoursTextBox->Name = L"hoursTextBox";
			this->hoursTextBox->Size = System::Drawing::Size(100, 22);
			this->hoursTextBox->TabIndex = 28;
			// 
			// maxStudentsTextBox
			// 
			this->maxStudentsTextBox->Location = System::Drawing::Point(204, 381);
			this->maxStudentsTextBox->Name = L"maxStudentsTextBox";
			this->maxStudentsTextBox->Size = System::Drawing::Size(100, 22);
			this->maxStudentsTextBox->TabIndex = 27;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::Control;
			this->label6->Location = System::Drawing::Point(27, 455);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(101, 27);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Elective :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::Control;
			this->label5->Location = System::Drawing::Point(27, 381);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(156, 27);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Max students:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(27, 296);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 27);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Hours:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(27, 218);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 27);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Instructor:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(27, 147);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 27);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Code:";
			// 
			// codeTextBox
			// 
			this->codeTextBox->Location = System::Drawing::Point(204, 152);
			this->codeTextBox->Name = L"codeTextBox";
			this->codeTextBox->Size = System::Drawing::Size(100, 22);
			this->codeTextBox->TabIndex = 21;
			// 
			// electiveCheckBox
			// 
			this->electiveCheckBox->AutoSize = true;
			this->electiveCheckBox->BackColor = System::Drawing::Color::Transparent;
			this->electiveCheckBox->Location = System::Drawing::Point(134, 464);
			this->electiveCheckBox->Name = L"electiveCheckBox";
			this->electiveCheckBox->Size = System::Drawing::Size(18, 17);
			this->electiveCheckBox->TabIndex = 20;
			this->electiveCheckBox->UseVisualStyleBackColor = false;
			// 
			// nameTextBox
			// 
			this->nameTextBox->Location = System::Drawing::Point(204, 85);
			this->nameTextBox->Name = L"nameTextBox";
			this->nameTextBox->Size = System::Drawing::Size(100, 22);
			this->nameTextBox->TabIndex = 19;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(27, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 27);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Name:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(1148, 439);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 30);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Edit course";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &EditCourse::button1_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label12->Location = System::Drawing::Point(25, 9);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(219, 41);
			this->label12->TabIndex = 34;
			this->label12->Text = L"Edit Course";
			// 
			// EditCourse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1801, 519);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->PrereqTextBox);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->instructorTextBox);
			this->Controls->Add(this->hoursTextBox);
			this->Controls->Add(this->maxStudentsTextBox);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->codeTextBox);
			this->Controls->Add(this->electiveCheckBox);
			this->Controls->Add(this->nameTextBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"EditCourse";
			this->Text = L"EditCourse";
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
	    System::Collections::Generic::List<String^>^ Prereq = gcnew System::Collections::Generic::List<String^>();
		bool shouldContinue = 1;
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		System::Collections::Generic::List<Courses>^ allcourses = readcoursedata();
		System::Collections::Generic::List<Students>^ allstudents = readstudentdata(allcourses);
		//initialize componenets
		int hours, maxNumberOfStudents;
		String^ Name, ^ code, ^ instructor;
		bool elective;

		// Prompt user for student name and password
		Name = nameTextBox->Text;
		code = codeTextBox->Text;
		instructor = instructorTextBox->Text;
		hours = Convert::ToInt32(hoursTextBox->Text);
		maxNumberOfStudents = Convert::ToInt32(maxStudentsTextBox->Text);
		elective = electiveCheckBox->Checked;

		if (checkBox1->Checked) {
			String^ x = "none";
			Prereq->Add(x);
		}

		// Check if course with given code already exists
		for each (Courses  c in allcourses)
		{
			if (code == c.code)
			{
				allcourses->Remove(c);
				Courses c = { Name,code,elective,maxNumberOfStudents,Prereq,hours,instructor };
				allcourses->Add(c);
				WriteCourseData(allcourses);
				WritePreReq(allcourses);
				MessageBox::Show("the course is edited succesfully !");
				return;
			}
			
		}

		MessageBox::Show("the course is not found in the system");
		
		

		


	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!checkBox1->Checked) {
		String^ CourseCode;
		CourseCode = PrereqTextBox->Text;
		Prereq->Add(CourseCode);
		if (MessageBox::Show("Do you want to add another course?", "Confirmation in prog", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
			shouldContinue = 1;
		}
		else {
			// If the user clicked No, return false to break out of the loop
			shouldContinue = 0;
		}
	}
}
};
}
