#include "Admin.h"
#include "Course.h"
#include<iostream>
#include <cassert>

using namespace std;

//Admin constructor
Admin::Admin(string adName, string adpass)
{
	Name = adName;
	pass = adpass;

}

//Function to check the students enrolled in a given course
void Admin::ViewStudentsEnrolled(map<string, vector<int>> enrolledstudentsid)
{

	cout << "Please enter the course code that you want to check :" << endl;

	string code;
	bool coursecheck = false;
	cin >> code;
	code = string(code);


	while (coursecheck == false) {

		if (enrolledstudentsid.count(code)) {
			cout << "The student's ids registered for this course are: " << endl;
			for (int i = 0; i < enrolledstudentsid[code].size(); i++) {
				cout << enrolledstudentsid[code][i] << " ";
			}
			cout << endl;
			coursecheck = true;
			break;
		}
		if (!coursecheck) {
			cout << "Please enter a correct course code:" << endl;
			cin >> code;
		}
	}

}

//Adding a new course 
void Admin::Addcourse(vector<Course>& allcourses)
{
	string Name, code, instructor;
	int hours, Max_Number_Of_Students;
	bool elective;

	cout << "Enter Course data" << endl;

	cout << "Enter Course Name" << endl;
	cin >> Name;

	cout << "Enter Course Code" << endl;
	cin >> code;

	cout << "Enter Course Instructor" << endl;
	cin >> instructor;


	cout << "Enter Course hours:" << endl;
	while (!(cin >> hours)) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Error: Invalid input. " << endl;
		cout << "Please enter a course hours : " << endl;
	}


	cout << "Enter Max no. of Students" << endl;
	while (!(cin >> Max_Number_Of_Students)) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Error: Invalid input. " << endl;
		cout << "Please enter a Max Number of Students : " << endl;
	}


	cout << "Enter 1 for elective and 0 for no." << endl;
	while (!(cin >> elective)) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Error: Invalid input. " << endl;
		cout << "Please enter 1 for elective and 0 for no : " << endl;
	}


	for (int i = 0; i < allcourses.size(); i++) {
		if (code == allcourses[i].code) {
			cout << "Course is already available";
			return;
		}
		else {
			continue;
		}
	}


	vector<string>Prerequisite = AddPreRequCourses();


	Course c(Name, code, hours, elective, Max_Number_Of_Students, Prerequisite, instructor);


	allcourses.push_back(c);

	return;

}

//Adding course pre requests
vector<string> Admin::AddPreRequCourses()
{
	cout << "Write prerequisite Courses:" << endl;
	string courseid;
	int option = 1;
	vector<string> preq;

	do {
		cout << "Enter Course ID:" << endl;
		cin >> courseid;

		if (courseid != "none") {
			cout << "Press 0 if you want to stop & Any number to continue" << endl;
			while (!(cin >> option)) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Error: Invalid input. " << endl;
				cout << "Press 0 if you want to stop & Any number to continue: " << endl;
			}
		}
		else {
			cout << "Course added! " << endl;
			preq.push_back(courseid);
			return preq;
		}

		preq.push_back(courseid);
		cout << "Prerequisite course added !" << endl;

	} while (option != 0);

	cout << "Course added !" << endl;
	return preq;
}





//Edit course function
void Admin::EditCourse(vector<Course>& allcourses)
{

	cout << "Enter the course ID that you want to edit" << endl;

	string coursecode;
	bool found = false;

	cin >> coursecode;

	string Name, code, instructor;
	int hours, Max_Number_Of_Students;
	bool elective;
	int i;

	while (found == false) {

		for (i = 0; i < allcourses.size(); i++) {

			if (coursecode == allcourses[i].code) {
				found = true;
			}
		}
		if (!found)
		{

			cout << "Error: please enter a valid cource" << endl;
			cin >> coursecode;

		}
		break;



	}
	cout << "                Edit " << coursecode << " Course data" << endl;

	cout << "Enter new Course Name" << endl;
	cin >> Name;
	allcourses[i].name = Name;

	cout << "Enter new Course Code" << endl;
	cin >> code;
	allcourses[i].code = code;


	cout << "Enter new Course Instructor" << endl;
	cin >> instructor;
	allcourses[i].instructor = instructor;


	cout << "Enter new Course hours:" << endl;
	while (!(cin >> hours)) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Error: Invalid input. " << endl;
		cout << "Please enter a correct course hours : " << endl;
	}
	allcourses[i].hours = hours;



	cout << "Enter new Max no. of Students" << endl;
	while (!(cin >> Max_Number_Of_Students)) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Error: Invalid input. " << endl;
		cout << "Please enter a Max Number of Students : " << endl;
	}
	allcourses[i].Max_Number_Of_Students = Max_Number_Of_Students;



	cout << "Enter 1 for elective and 0 for no" << endl;
	while (!(cin >> elective)) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Error: Invalid input. " << endl;
		cout << "Please enter 1 for elective and 0 for no : " << endl;
	}
	allcourses[i].elective = elective;



	cout << "Edit PreReq Courses" << endl;
	allcourses[i].Prerequisite = AddPreRequCourses();


}












//Adding course grade by removing it from the in progress courses and putting it into finished courses
void Admin::AddCourseGrade(vector<Student>& allstudents, vector<Course> allcourses)
{
	bool studentfound = 0, coursefound = 0;

	int studentindex;
	vector<string> tempcodes;
	cout << "Enter the student ID to add his grade :" << endl;
	int id;
	cin >> id;
	for (int i = 0; i < allstudents.size(); i++) {
		if (id == allstudents[i].ID) {
			studentindex = i;
			studentfound = 1;
			break;
		}
	}

	if (studentfound == 0) {
		cout << "Student is not found try again !" << endl;
		return;
	}

	cout << "Enter the course code to be modified :" << endl;
	string coursecode;
	cin >> coursecode;

	for (int i = 0; i < allstudents[studentindex].CoursesInProgress.size(); i++) {
		if (coursecode == allstudents[studentindex].CoursesInProgress[i].code) {
			coursefound = 1;
		}
	}


	if (coursefound && studentfound) {
		for (int i = 0; i < allstudents[studentindex].CoursesInProgress.size(); i++) {
			if (allstudents[studentindex].CoursesInProgress[i].code != coursecode) {
				tempcodes.push_back(allstudents[studentindex].CoursesInProgress[i].code);
			}
		}

		vector<Course> temp;
		for (int i = 0; i < tempcodes.size(); i++) {
			for (int j = 0; j < allcourses.size(); j++) {
				if (tempcodes[i] == allcourses[j].code) {
					temp.push_back(allcourses[j]);
				}
			}
		}

		allstudents[studentindex].CoursesInProgress = temp;
		string coursegrade;
		cout << "Now enter the course grade that you want for student: " << id << "in course :" << coursecode << endl;
		cin >> coursegrade;
		allstudents[studentindex].FinishedCourses[coursecode] = coursegrade;
		cout << "The grade is added !" << endl;
		return;
	}

	else {
		cout << "The student doesn't take this course or the course is not available !" << endl;
		return;
	}

}

//Display  in progress courses for a given student
void Admin::DisplayInProgressCourses(int id, vector<Student> allstud)
{
	bool isstudentID = false;
	for (int i = 0; i < allstud.size(); i++)
	{
		if (id == allstud[i].ID)
		{
			isstudentID = true;
			if (allstud[i].CoursesInProgress.empty()) {
				cout << "No available courses" << endl;
			}
			else {
				for (int j = 0; j < allstud[i].CoursesInProgress.size(); j++)
				{
					cout << allstud[i].CoursesInProgress[j].name << endl;
				}
			}
			break;
		}
	}
	if (!isstudentID) {
		cout << "Unmatched ID." << endl;
	}
}

//Display finished courses for a given student

void Admin::DisplayfinishedCourses(int id, vector<Student> allstud)
{
	bool isstudentID = false;
	for (int i = 0; i < allstud.size(); i++)
	{
		if (id == allstud[i].ID)
		{
			isstudentID = true;
			if (allstud[i].FinishedCourses.empty()) {
				cout << "No finished courses" << endl;
			}
			else {
				map<string, string> m;
				m = allstud[i].FinishedCourses;
				// Print the map values
				for (auto it = m.begin(); it != m.end(); ++it) {
					cout << it->first << " : " << it->second << endl;
				}
			}
		}
	}

	if (!isstudentID) {
		cout << "Unmatched ID." << endl;
	}
}



//Add new student 
void Admin::AddNewStudent(vector<Student>& allstudents, vector<Course>courses)
{
	cout << "enter student ID" << endl;

	int id;

	//checks the data type matches or not the required data type.
	while (!(cin >> id)) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Error: Invalid input. " << endl;
		cout << "Please enter an integer ID : " << endl;
	}

	for (int i = 0; i < allstudents.size(); i++)
	{
		if (id == allstudents[i].ID)
		{
			cout << "this student already exist " << endl;
			return;
		}
	}

	cout << "enter student name" << endl;
	string name;
	cin >> name;



	cout << "enter student password " << endl;
	string pass;
	cin >> pass;



	cout << "Enter student academic year" << endl;
	int AcademicYear;
	while (!(cin >> AcademicYear)) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Error: Invalid input. " << endl;
		cout << "Enter student academic year : " << endl;
	}


	cout << "enter student GPA: " << endl;
	float GPA;

	while (!(cin >> GPA)) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Error: Invalid input. " << endl;
		cout << "Please enter student GPA : " << endl;
	}

	cout << "enter student's maximum hours allowed: " << endl;
	int StudMaxHoursAllowed;

	while (!(cin >> StudMaxHoursAllowed)) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Error: Invalid input. " << endl;
		cout << "Please enter student's maximum hours allowed: " << endl;
	}

	cout << "Enter student's finished courses: " << endl;

	map <string, string> studFinishedCourses;

	while (true) {
		cout << "Enter course code" << endl;
		string CourseName, Grade;
		bool coursesname = false;
		string grades[24] = { "A+", "A", "A-","B+","B","B-","C+","C","C-","D","D-","F","a+","a","a-","b+","b","b-","c+","c","c-","d","d-","f" };
		while (coursesname == false)
		{

			cin >> CourseName;

			for (int i = 0; i < courses.size(); i++) {
				if (CourseName == courses[i].code) {
					coursesname = true;
					
					break;
				}
			}
			if (coursesname == false)
			{
				cout << "please enter valid course" << endl;
			}
		}

		bool gradefound = false;
		cout << "Enter course grade" << endl;
		cin >> Grade;

		while (gradefound == false) {

			for (int i = 0; i < 24; i++) {
				if (Grade == grades[i]) {
					gradefound = true;
					break;
				}
			}

			if (!gradefound) {
				cout << "Please enter a correct Grade" << endl;
				cin >> Grade;
			}
		}

		studFinishedCourses[CourseName] = Grade;
		cout << "Press any number to enter the rest of finished courses or 0 to enter enrolled courses " << endl;
		int x;

		cin >> x;
		if (x == 0) {
			break;
		}
	}

	vector<string> studCoursesInProgress;
	vector<Course>neededcourses;
	string coursecode;

	int x = 5;
	while (x != 0) {
		cout << "Enter course code:" << endl;
		string CourseName;
		cin >> CourseName;
		studCoursesInProgress.push_back(CourseName);
		cout << "Press any number to continue, if done press 0" << endl;
		cin >> x;


	}

	for (int i = 0; i < studCoursesInProgress.size(); i++) {
		for (int j = 0; j < courses.size(); j++)
		{
			if (studCoursesInProgress[i] == courses[j].code)
			{
				neededcourses.push_back(courses[j]);
			}
		}
	}

	string email;
	email = name + to_string(id) + "@cis.asu.edu.eg";
	cout << "Student Generated Email is" << " " << email << endl;


	Student s(name, email, pass, id, AcademicYear, GPA, StudMaxHoursAllowed, studFinishedCourses, neededcourses);

	allstudents.push_back(s);
	return;
}


