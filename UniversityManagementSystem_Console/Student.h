#pragma once
#include<string>
#include<vector>
#include <fstream>
#include "Course.h"
using namespace std;

class Student
{
public:
	//Atributes
	string Name, Email, Password;
	int ID, MaxHoursAllowed, AcademicYear;
	float GPA;
	vector<Course> CoursesInProgress;
	map <string, string> FinishedCourses;


	//Constructor to add new student	
	Student();
	Student(string studname, string studEmail, string studPassword, int studid, int studacademicyear, float studgpa, int studmaxhoursallowed, map <string, string> studFinishedCourses, vector<Course> studCoursesInProgress);

	//Functions
	void FilterCourses(vector<Course>allcourses);
	void ViewAllAvaillableCourses(vector<Course>allcourses, vector<Student>allstudents, map<string, vector<int>> enrolledstudentsid, int studentid);
	void ViewAllAvaillableCourses(vector<Course>allcourses, vector<Student> allstudents, map<string, vector<int>> enrolledstudentsid, vector<Course>& courses, int stdtid);
	void RegisterForCourse(vector<Course>allcourses, vector<Student>& allstudents, map<string, vector<int>> enrolledstudentsid, int studentid);
	void EditStudentData(vector<Student>& allstudents, int studentid);
	void ViewAllCourses(vector<Student> allstudents, int studentid);
	void ViewGradeAndGPA(vector<Student> allstudents, int studentid);


};

