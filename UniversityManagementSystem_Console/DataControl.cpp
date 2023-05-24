#include "DataControl.h"
#include"Course.h"
#include<fstream>
#include <sstream>
#include<map>
using namespace std;
vector<Student> DataControl::ReadStudentData(vector<Course> allcourses)
{
	//The vector of students that we will return
	vector<Student> students;

	//Reading the file
	ifstream datafile("StudentData.txt");

	//Variables to be filled from the file
	string Name, Email, Password;
	int ID, Academicyear, Maxhoursallowed;
	float GPA;

	//Reading each line and filling the students vector
	while (datafile >> Name >> Email >> Password >> ID >> Academicyear >> GPA >> Maxhoursallowed) {
		vector<Course> CoursesinProgress = ReadInProgressCourses(ID, allcourses);
		map<string, string> FinishedCourses = ReadFinishedCourses(ID);
		Student s(Name, Email, Password, ID, Academicyear, GPA, Maxhoursallowed, FinishedCourses, CoursesinProgress);
		students.push_back(s);
	}


	return students;
}

vector<Course> DataControl::ReadInProgressCourses(int ID, vector<Course> allcourses)
{
	//Reading the file
	ifstream datafile("StudentsCoursesInProgress.txt");

	//a string containg a line to iterate on each line
	string line;

	//loop on every line and store the first element as our course id and the other element in a vector for the courses pre requests ids
	vector<string> coursescodes;

	while (getline(datafile, line)) {
		// Creating a pointer to 
		istringstream iss(line);

		// read the first element
		int studentid;
		iss >> studentid;

		if (ID == studentid) {
			//getting the enrolledcourses codes as the vector
			string code;
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
	vector<Course>neededcourses;
	for (int i = 0; i < coursescodes.size(); i++) {
		for (int j = 0; j < allcourses.size(); j++) {
			if (coursescodes[i] == allcourses[j].code) {
				neededcourses.push_back(allcourses[j]);
			}
		}

	}

	return neededcourses;
}

map<string, string> DataControl::ReadFinishedCourses(int ID)
{

	//Reading the file
	ifstream datafile("StudentsFinishedCourses.txt");

	//a string containg a line to iterate on each line
	string line;
	map<string, string>finishedcourses;
	//loop on every line and store the first element as our course id and the other element in a vector for the courses pre requests ids
	while (getline(datafile, line)) {
		// Creating a pointer to 
		istringstream iss(line);

		// read the first element
		int studentid;
		iss >> studentid;

		if (studentid == ID) {
			//storing the course code and its grade
			string code;
			string grade;
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


vector<string>  DataControl::ReadPreReqCourses(string code)
{
	//Stores the id of the given vector and the ids of all pre requests
	vector<string> CoursesIds;

	//Reading the file
	ifstream datafile("precourses.txt");

	//a string containg a line to iterate on each line
	string line;
	string first;
	//loop on every line and store the first element as our course id and the other element in a vector for the courses pre requests ids
	while (getline(datafile, line)) {
		// Creating a pointer to 
		istringstream iss(line);

		// read the first element

		iss >> first;

		if (code == first) {
			//getting the pre requests courses as the vector
			
			string code;
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
vector<Course> DataControl::ReadCourseData() {

	//The vector of courses that we will return
	vector<Course> courses;

	//Reading the file
	ifstream datafile("Coursedata.txt");

	//Variables to be filled from the file
	string Name, code, instructor;
	int hours, Max_Number_Of_Students;
	bool elective;

	//Reading each line and filling the courses vector
	while (datafile >> Name >> code >> instructor >> hours >> Max_Number_Of_Students >> elective) {

		vector<string>pre_req = ReadPreReqCourses(code);
		Course c(Name, code, hours, elective, Max_Number_Of_Students, pre_req, instructor);
		courses.push_back(c);
	}


	return courses;

}
vector<Admin> DataControl::ReadAdminData() {
	//The vector of admin that we will return
	vector<Admin> admins;

	//Reading the file
	ifstream datafile("admin data.txt");

	//Variables to be filled from the file
	string Name, pass;


	//Reading each line and filling the admin vector
	while (datafile >> Name >> pass) {

		Admin a(Name, pass);
		admins.push_back(a);
	}


	return admins;


}

void DataControl::WriteStudentData(vector<Student> allstudents)
{
	ofstream Studentdata("StudentData.txt");
	for (int i = 0; i < allstudents.size(); i++) {
		Studentdata << allstudents[i].Name<<" " << allstudents[i].Email << " " << allstudents[i].Password << " " << allstudents[i].ID << " " << allstudents[i].AcademicYear << " " << allstudents[i].GPA << " " << allstudents[i].MaxHoursAllowed << " " << endl;
	}


}

void DataControl::WriteFinishedCoursesData(vector<Student> allstudents)
{
	ofstream finishedcourses("StudentsFinishedCourses.txt");
	for (int i = 0; i < allstudents.size(); i++) {
		finishedcourses << allstudents[i].ID << " ";
		for (const auto& pair : allstudents[i].FinishedCourses) {
			finishedcourses << pair.first << " " << pair.second << " ";
		}
		finishedcourses << endl;
}
}

void DataControl::WriteInProgressCourses(vector<Student> allstudents)
{
	ofstream inprogcourses("StudentsCoursesInProgress.txt");

	for (int i = 0; i < allstudents.size(); i++) {
		inprogcourses << allstudents[i].ID << " ";
		for (int j = 0; j < allstudents[i].CoursesInProgress.size(); j++) {
			inprogcourses << allstudents[i].CoursesInProgress[j].code << " ";
		}
		inprogcourses << endl;
	}

}

void DataControl::WritePreReq(vector<Course> allcourses)
{
	ofstream prereqdata("precourses.txt");

	for (int i = 0; i < allcourses.size(); i++) {
		prereqdata << allcourses[i].code<<" ";
		for (int j = 0; j < allcourses[i].Prerequisite.size(); j++) {
			prereqdata << allcourses[i].Prerequisite[j]<<" ";
		}
		prereqdata << endl;
	}

}

void DataControl::WriteCourseData(vector<Course> allcourses)
{
	ofstream coursedata("Coursedata.txt");
	for (int i = 0; i < allcourses.size(); i++) {
		coursedata << allcourses[i].name<<" " << allcourses[i].code<<" " << allcourses[i].instructor<<" "<< allcourses[i].hours<<" " << allcourses[i].Max_Number_Of_Students<<" " << allcourses[i].elective<<" " << endl;
	}
}

void DataControl::WriteAdminData(vector<Admin> alladmins)
{
	ofstream admindata("admin data.txt");
	for (int i = 0; i < alladmins.size(); i++) {
		admindata << alladmins[i].Name << " " << alladmins[i].pass << " " << endl;
	}
}

































