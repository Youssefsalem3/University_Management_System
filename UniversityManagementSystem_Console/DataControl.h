#pragma once
#include"Student.h"
#include"Course.h"
#include"Admin.h"
#include<fstream>
#include <sstream>
class DataControl
{
public:
	vector <Student> ReadStudentData(vector<Course> courses);
	vector<Course> ReadInProgressCourses(int ID, vector<Course> allcourses);
	map<string, string> ReadFinishedCourses(int ID);
	vector<string>ReadPreReqCourses(string code);
	vector<Course> ReadCourseData();
	vector<Admin>ReadAdminData();

	void WriteStudentData(vector<Student> allstudents);
	void WriteFinishedCoursesData(vector <Student> allstudents);
	void WriteInProgressCourses(vector <Student> allstudents);
	void WritePreReq(vector<Course> allcourses);
	void WriteCourseData(vector <Course> allcourses);
	void WriteAdminData(vector <Admin> alladmins);

};

