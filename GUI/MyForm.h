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
#include"AdminPage.h"


class admin {
public:
	std::string name;
	std::string pass;
	admin(std::string adname, std::string adpass) {
		name = adname;
		pass = adpass;
	}
	static std::vector<admin> readadmindata() {
		//The vector of admin that we will return
		std::vector<admin> admins;

		//Reading the file
		std::ifstream datafile("admin data.txt");

		//Variables to be filled from the file
		std::string Name, pass;


		//Reading each line and filling the admin vector
		while (datafile >> Name >> pass) {

			admin a(Name, pass);
			admins.push_back(a);
		}


		return admins;
	}
};
class Course {
public:
	std::string name;
	std::string code;
	bool elective;
	int Max_Number_Of_Students;
	std::vector<std::string> Prerequisite;
	int hours;
	std::string instructor;


	Course(std::string coursename, std::string coursecode, int coursehours, bool requiring, int Num_Of_Students, std::vector<std::string> Prerequisite_courses, std::string Instructor_Name) {
		name = coursename;
		code = coursecode;
		hours = coursehours;
		elective = requiring;
		Max_Number_Of_Students = Num_Of_Students;
		Prerequisite = Prerequisite_courses;
		instructor = Instructor_Name;
	}



};
class Student
{
public:
	std::string Name, Email, Password;
	int ID, MaxHoursAllowed, AcademicYear;
	float GPA;
	std::vector<Course> CoursesInProgress;
	std::map <std::string, std::string> FinishedCourses;


	//Constructor to add new student	
	Student() {
		Name = " ";
		Email = " ";
		Password = " ";
		ID = 0;
		AcademicYear = 0;
		GPA = 0;
		MaxHoursAllowed = 0;
		FinishedCourses = {};
		CoursesInProgress = {};
	};
	Student(std::string studname, std::string studEmail, std::string studPassword, int studid, int studacademicyear, float studgpa, int studmaxhoursallowed, std::vector<Course> studCoursesInProgress, std::map<std::string, std::string>studFinishedCourses) {
		Name = studname;
		Email = studEmail;
		Password = studPassword;
		ID = studid;
		AcademicYear = studacademicyear;
		GPA = studgpa;
		MaxHoursAllowed = studmaxhoursallowed;
		FinishedCourses = studFinishedCourses;
		CoursesInProgress = studCoursesInProgress;
	};

	std::vector<Student> readstudentdata(std::vector<Course> allcourses) {
		//The vector of admin that we will return
		std::vector<Student> students;

		//Reading the file
		std::ifstream datafile("stddata.txt");

		//Variables to be filled from the file
		std::string Name, Email, Password;
		int ID, Academicyear, Maxhoursallowed;
		float GPA;
		//Reading each line and filling the admin vector
		while (datafile >> Name >> Email >> Password >> ID >> Academicyear >> GPA >> Maxhoursallowed) {
			std::vector<Course> CoursesinProgress = ReadInProgressCourses(ID, allcourses);
			std::map<std::string, std::string> FinishedCourses = ReadFinishedCourses(ID);
			Student stud(Name, Email, Password, ID, Academicyear, GPA, Maxhoursallowed, CoursesinProgress, FinishedCourses);
			students.push_back(stud);
		}
		return students;



	}
	std::vector<Course> ReadInProgressCourses(int id, std::vector<Course> allcourses) {
		//Reading the file
		std::ifstream datafile("StudentsCoursesInProgress.txt");

		//a string containg a line to iterate on each line
		std::string line;

		//loop on every line and store the first element as our course id and the other element in a vector for the courses pre requests ids
		std::vector<std::string> coursescodes;

		while (getline(datafile, line)) {
			// Creating a pointer to 
			std::istringstream iss(line);

			// read the first element
			int studentid;
			iss >> studentid;

			if (id == studentid) {
				//getting the enrolledcourses codes as the vector
				std::string code;
				while (iss >> code) {
					coursescodes.push_back(code);
				}
				break;
			}
			else {
				continue;
			}

		}
		//the vector in which we will add all the enrolled courses to set to the index we found above
		std::vector<Course>neededcourses;
		for (int i = 0; i < coursescodes.size(); i++) {
			for (int j = 0; j < allcourses.size(); j++) {
				if (coursescodes[i] == allcourses[j].code) {
					neededcourses.push_back(allcourses[j]);
				}
			}

		}

		return neededcourses;
	}
	std::map<std::string, std::string>ReadFinishedCourses(int ID) {
		//Reading the file
		std::ifstream datafile("StudentsFinishedCourses.txt");

		//a string containg a line to iterate on each line
		std::string line;
		std::map<std::string, std::string>finishedcourses;
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
					finishedcourses[code] = grade;
				}
				break;
			}
			else {
				continue;
			}

		}
		return finishedcourses;
	}
	std::vector<std::string>ReadPreReqCourses(std::string code) {
		//Stores the id of the given vector and the ids of all pre requests
		std::vector<std::string> CoursesIds;

		//Reading the file
		std::ifstream datafile("precourses.txt");

		//a string containg a line to iterate on each line
		std::string line;
		std::string first;
		//loop on every line and store the first element as our course id and the other element in a vector for the courses pre requests ids
		while (getline(datafile, line)) {
			// Creating a pointer to 
			std::istringstream iss(line);

			// read the first element

			iss >> first;

			if (code == first) {
				//getting the pre requests courses as the vector

				std::string code;
				while (iss >> code) {
					CoursesIds.push_back(code);
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
	std::vector<Course> ReadCourseData() {
		//The vector of courses that we will return
		std::vector<Course> courses;

		//Reading the file
		std::ifstream datafile("Coursedata.txt");

		//Variables to be filled from the file
		std::string Name, code, instructor;
		int hours, Max_Number_Of_Students;
		bool elective;

		//Reading each line and filling the courses vector
		while (datafile >> Name >> code >> instructor >> hours >> Max_Number_Of_Students >> elective) {

			std::vector<std::string>pre_req = ReadPreReqCourses(code);
			Course c(Name, code, hours, elective, Max_Number_Of_Students, pre_req, instructor);
			courses.push_back(c);
		}


		return courses;
	}
	std::map<std::string, std::vector<int>> fillmap(std::vector<Student> allstudents) {
		std::map<std::string, std::vector<int>> enrolledstudentsid;
		for (int i = 0; i < allstudents.size(); i++) {
			for (int j = 0; j < allstudents[i].CoursesInProgress.size(); j++) {
				enrolledstudentsid[allstudents[i].CoursesInProgress[j].code].push_back(allstudents[i].ID);
			}
		}
		return enrolledstudentsid;
	}

};
admin a("test", "test");
Student s1;
std::vector <admin> Adminnames = a.readadmindata();
std::vector<Course> allcourses = s1.ReadCourseData();
std::vector<Student> allstudents = s1.readstudentdata(allcourses);

#include "AdminPage.h"
#include "StudentPage.h"
namespace GUITrial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->AccessibleName = L"";
			this->textBox1->BackColor = System::Drawing::Color::LightGray;
			this->textBox1->Location = System::Drawing::Point(355, 128);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(214, 22);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::LightGray;
			this->textBox2->Location = System::Drawing::Point(355, 211);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(214, 22);
			this->textBox2->TabIndex = 1;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Ebrima", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(390, 330);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 35);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Sign in";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(280, 87);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(823, 400);
			this->panel1->TabIndex = 5;
			this->panel1->BackColor = Color::FromArgb(20, Color::White);
			this->pictureBox2->BackColor = Color::FromArgb(0, Color::White);
			this->pictureBox1->BackColor = Color::FromArgb(0, Color::White);
			this->pictureBox3->BackColor = Color::FromArgb(0, Color::White);
			this->pictureBox4->BackColor = Color::FromArgb(0, Color::White);
			this->pictureBox5->BackColor = Color::FromArgb(0, Color::White);
			
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Location = System::Drawing::Point(575, 201);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(87, 42);
			this->pictureBox5->TabIndex = 9;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &MyForm::pictureBox5_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(585, 209);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(67, 24);
			this->pictureBox4->TabIndex = 8;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm::pictureBox4_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(262, 201);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(87, 42);
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(262, 113);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(87, 37);
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(350, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(213, 85);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1359, 597);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->RightToLeftLayout = true;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		///////////////////////////////////////////////////////////////////

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Email = textBox1->Text;
		std::string email = msclr::interop::marshal_as<std::string>(Email);
		String^ Password = textBox2->Text;
		bool admin = 0;
		bool student = 0;
		std::string password = msclr::interop::marshal_as<std::string>(Password);


		for (int i = 0; i < Adminnames.size(); i++) {
			if (Adminnames[i].name == email && Adminnames[i].pass == password) {

				admin = 1;
				AdminPage^ form2 = gcnew AdminPage();
				form2->Show();
				this->Hide();
			}
		}

		std::ofstream Studentdata("Userindex.txt");
		std::ofstream studentname("stdname.txt");
		for (int j = 0; j < allstudents.size(); j++) {
			if (allstudents[j].Email == email && allstudents[j].Password == password) {
				Studentdata << j;
				student = 1;
				StudentPage^ form = gcnew StudentPage();
				form->Show();
				this->Hide();

			}
		}

		if (admin == 0 && student == 0) {
			MessageBox::Show("invalid user !");
		}

	}




	private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
		pictureBox5->Hide();
		pictureBox4->Show();
		this->textBox2->UseSystemPasswordChar = true;

	}

private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox4->Hide();
	pictureBox5->Show();
	this->textBox2->UseSystemPasswordChar = false;
}

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	pictureBox5->Hide();
}


};

}


