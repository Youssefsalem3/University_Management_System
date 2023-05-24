#include "Student.h"
#include<iostream>
#include<algorithm>
using namespace std;

//Default constructor
Student::Student()
{

}

//Overloaded constructor that we will need on creating a new student
Student::Student(string studname, string studEmail, string studPassword, int studid, int studacademicyear, float studgpa, int studmaxhoursallowed, map<string, string> studFinishedCourses, vector<Course> studCoursesInProgress)
{
	Name = studname;
	Email = studEmail;
	Password = studPassword;
	ID = studid;
	AcademicYear = studacademicyear;
	GPA = studgpa;
	MaxHoursAllowed = studmaxhoursallowed;
	FinishedCourses = studFinishedCourses;
	CoursesInProgress = studCoursesInProgress;
}

//Filter courses and display the course that match the student desires
void Student::FilterCourses(vector<Course>allcourses) {
	string InstructorName;
	int c = 100;

	while (c != 0) {
		cout << "press 1 to filter the courses by the instructor name" << endl;
		cout << "press 2 to show essential courses only" << endl;
		cout << "press 3 to show trivial courses only" << endl;
		cout << "press 4 to filter the courses by its hours" << endl;
		cout << "press 0 to exit" << endl;
		while (!(cin >> c)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Error: Invalid input. " << endl;
			cout << "Please enter an integer option : " << endl;
		}


		if (c == 0) {
			return;
		}


		else if (c == 1) {
			cout << "enter instructor name" << endl;
			cin >> InstructorName;
			bool instname = 0;
			for (int i = 0; i < allcourses.size(); i++)
			{
				if (InstructorName == allcourses[i].instructor)
				{
					cout << allcourses[i].name << " ";
					instname = 1;
				}

			}if (!instname) {
				cout << "Incorrect instructor name" << endl;
			}
			cout << endl;
		}


		else if (c == 2) {
			for (int i = 0; i < allcourses.size(); i++)
			{
				if (allcourses[i].elective == 0)
				{
					cout << allcourses[i].name << " ";
				}
			}
			cout << endl;
		}


		else if (c == 3) {

			for (int i = 0; i < allcourses.size(); i++)
			{
				if (allcourses[i].elective == 1)
				{
					cout << allcourses[i].name << " ";
				}
			}
			cout << endl;
		}

		else if (c == 4) {
			cout << "Enter the maximum number of hours you don't want to exceed" << endl;
			int h = 0;
			bool validInput = false;

			while (!validInput) {
				if (cin >> h) {
					validInput = true;
				}
				else {
					cout << "Invalid input. Please enter an integer value for hours: ";
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
			}

			for (int i = 0; i < allcourses.size(); i++)
			{
				if (allcourses[i].hours <= h)
				{
					cout << allcourses[i].name << " ";
				}
			}
			cout << endl;
		}

		else {
			cout << "Incorrect number" << endl;
		}
	}
}

//View all available courses that the student can take
void Student::ViewAllAvaillableCourses(vector<Course>allcourses, vector < Student>allstudents, map<string, vector<int>> enrolledstudentsid, int studentid) {

	cout << "your available courses are: ";
	for (int i = 0; i < allcourses.size(); i++)
	{
		int no_ofenrolled_students;
		int stdthours = 0;
		vector<string>Finished_Courses_vector;
		bool inprog = 0, finished = 0, maxnumber = 0, maxhoures = 0, prereq = 0;
		Student stdt;
		stdt = allstudents[studentid];

		for (int j = 0; j < stdt.CoursesInProgress.size(); j++)
		{
			if (allcourses[i].code == stdt.CoursesInProgress[j].code)
			{
				inprog = 1;
			}
			stdthours += stdt.CoursesInProgress[j].hours;
		}

		for (map<string, string>::iterator it = stdt.FinishedCourses.begin(); it != stdt.FinishedCourses.end(); it++)
		{
			if (allcourses[i].code == it->first)
			{
				finished = 1;
			}

			Finished_Courses_vector.push_back(it->first);
		}
		for (int j = 0; j < allcourses[i].Prerequisite.size(); j++)
		{
			if (allcourses[i].Prerequisite[0] != "none") {
				bool found = 0;
				for (int z = 0; z < Finished_Courses_vector.size(); z++) {
					if (allcourses[i].Prerequisite[j] == Finished_Courses_vector[z]) {
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
		if ((stdthours + allcourses[i].hours) > stdt.MaxHoursAllowed)
		{
			maxhoures = 1;
		}
		no_ofenrolled_students = enrolledstudentsid.count((string(allcourses[i].code)));

		if (no_ofenrolled_students >= allcourses[i].Max_Number_Of_Students) {
			maxnumber = 1;
		}

		if (maxhoures == 0 && maxnumber == 0 && finished == 0 && inprog == 0 && prereq == 0)
		{
			cout << allcourses[i].name << " ";
		}
		else {

			continue;
		}

	}
	cout << endl;
}

//overoaded view all available courses to use it in registering for a course as we want a vector of the courses that we can take to minimize the iterations
void Student::ViewAllAvaillableCourses(vector<Course> allcourses, vector<Student> allstudents, map<string, vector<int>> enrolledstudentsid, vector<Course>& courses, int stdtid)
{
	vector<Course>courseschecked;
	cout << "your available courses are: ";
	for (int i = 0; i < allcourses.size(); i++)
	{
		int no_ofenrolled_students;
		int stdthours = 0;
		vector<string>Finished_Courses_vector;

		bool inprog = 0, finished = 0, maxnumber = 0, maxhoures = 0, prereq = 0;
		Student stdt;
		stdt = allstudents[stdtid];



		for (int j = 0; j < stdt.CoursesInProgress.size(); j++)
		{
			if (allcourses[i].code == stdt.CoursesInProgress[j].code)
			{
				inprog = 1;
			}
			stdthours += stdt.CoursesInProgress[j].hours;
		}

		for (map<string, string>::iterator it = stdt.FinishedCourses.begin(); it != stdt.FinishedCourses.end(); it++)
		{
			if (allcourses[i].code == it->first)
			{
				finished = 1;
			}

			Finished_Courses_vector.push_back(it->first);
		}
		for (int j = 0; j < allcourses[i].Prerequisite.size(); j++)
		{
			if (allcourses[i].Prerequisite[0] != "none") {
				bool found = 0;
				for (int z = 0; z < Finished_Courses_vector.size(); z++) {
					if (allcourses[i].Prerequisite[j] == Finished_Courses_vector[z]) {
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
		if ((stdthours + allcourses[i].hours) > stdt.MaxHoursAllowed)
		{
			maxhoures = 1;
		}
		no_ofenrolled_students = enrolledstudentsid.count((string(allcourses[i].code)));
		if (no_ofenrolled_students >= allcourses[i].Max_Number_Of_Students) {
			maxnumber = 1;
		}
		if (maxhoures == 0 && maxnumber == 0 && finished == 0 && inprog == 0 && prereq == 0)
		{
			cout << allcourses[i].name << " ";
			courseschecked.push_back(allcourses[i]);
		}
		else {

			continue;
		}

	}
	courses = courseschecked;
	cout << endl;

}

//Register for a course
void Student::RegisterForCourse(vector<Course> allcourses, vector<Student>& allstudents, map<string, vector<int>> enrolledstudentsid, int studentid)
{
	vector<Course> courses;
	int stdtid;
	stdtid = studentid;
	ViewAllAvaillableCourses(allcourses, allstudents, enrolledstudentsid, courses, stdtid);

	cout << "Which course do you want to take from your available courses ?" << endl;
	string s;
	cin >> s;

	for (int i = 0; i < courses.size(); i++) {
		if (s == courses[i].name) {
			allstudents[studentid].CoursesInProgress.push_back(courses[i]);
			cout << "Course added !";
		}
	}
}

//Edit student data here the student can only edit his password as the other attributes should not be  modified by the student
void Student::EditStudentData(vector<Student>& allstudents, int studentid)
{
	cout << "                Edit your Password:" << endl;
	string oldpassword;
	string newpassword;
	cout << "Enter your old password: " << endl;
	cin >> oldpassword;
	while (oldpassword != allstudents[studentid].Password) {
		cout << "Wrong password, please try again." << endl;
		cout << "Enter your old password: " << endl;
		cin >> oldpassword;
	}
	cout << "Enter your new password: " << endl;
	cin >> newpassword;
	allstudents[studentid].Password = newpassword;
}

//view all courses for a student
void Student::ViewAllCourses(vector<Student> allstudents, int studentid)
{
	cout << "                Here are all your Courses:" << endl;
	Student stdid;
	stdid = allstudents[studentid];

	cout << "Your finished courses are: " << endl;
	map<string, string> m;
	m = stdid.FinishedCourses;
	// Print the map values
	if (m.empty()) {
		cout << "No finished courses" << endl;
	}
	else {
		for (auto it = m.begin(); it != m.end(); ++it) {
			cout << it->first << " " << endl;
		}
	}

	cout << "Your InProgress courses are: " << endl;
	if (stdid.CoursesInProgress.empty()) {
		cout << "No in-progress courses" << endl;
	}
	else {
		for (int i = 0; i < stdid.CoursesInProgress.size(); i++) {
			cout << stdid.CoursesInProgress[i].name << endl;
		}
	}
}

//view all finished courses for a student ,his grades and finally his GPA

void Student::ViewGradeAndGPA(vector<Student> allstudents, int studentid)
{
	cout << "                Here are your Grades and your GPA:" << endl;
	Student stdid;
	stdid = allstudents[studentid];

	cout << "Your finished courses with your grades are: " << endl;
	map<string, string> m;
	m = stdid.FinishedCourses;
	// Print the map values
	if (m.empty()) {
		cout << "No finished courses" << endl;
	}
	else {
		for (auto it = m.begin(); it != m.end(); ++it) {
			cout << it->first << " " << it->second << endl;
		}
	}

	cout << "Your GPA: " << stdid.GPA << endl;

}


