#pragma once
#include<string>
#include "Student.h"
#include "Course.h"

using namespace std;
class Admin
{
public:
	//Atributes
	string Name, pass;

	//Functions
	Admin(string, string);
	void ViewStudentsEnrolled(map<string, vector<int>> enrolledstudentsid);
	void Addcourse(vector<Course>& allcourses);
	vector<string> AddPreRequCourses();
	void AddCourseGrade(vector<Student>& allstudents, vector<Course> allcourses);
	void EditCourse(vector<Course>& allcourses);
	void AddNewStudent(vector<Student>& allstudents, vector<Course>courses);
	void DisplayInProgressCourses(int id, vector<Student>allstud);
	void DisplayfinishedCourses(int id, vector<Student>allstud);
	

};

