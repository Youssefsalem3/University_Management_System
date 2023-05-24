#include <iostream>
#include"Student.h"
#include"DataControl.h"
#include <fstream>
#include"Course.h"
#include"data_analysis.h"

//Creating a datacontrol object and loading the needed vectors
DataControl d1;
vector <Course>allcourses = d1.ReadCourseData();
vector<Student>allstudents = d1.ReadStudentData(allcourses);
vector<Admin>alladmins = d1.ReadAdminData();

//Booleans to check if the user is an admin or a student
bool admin = 0;
bool student = 0;

//The id of the student who loged in
int studentid;

//initiallizing the login function
void Login();

using namespace std;
int main()
{
	//calling login function
	Login();

	//settting the map that contain each course and the students enrolled in it 
	map<string, vector<int>> enrolledstudentsid;
	for (int i = 0; i < allstudents.size(); i++) {
		for (int j = 0; j < allstudents[i].CoursesInProgress.size(); j++) {
			enrolledstudentsid[allstudents[i].CoursesInProgress[j].code].push_back(allstudents[i].ID);
		}
	}

	//admin portal
	if (admin) {
		while (true) {
			cout << "Here is a list for what you can do :" << endl;
			cout << "- Press 1 to add a new student" << endl;
			cout << "- Press 2 to add a new course" << endl;
			cout << "- Press 3 to view students enrolled in a course" << endl;
			cout << "- Press 4 to edit course info" << endl;
			cout << "- Press 5 to add a course grade for a student" << endl;
			cout << "- Press 6 to display courses enrolled by a student" << endl;
			cout << "- Press 7 to display courses finished by a student" << endl;
			cout << "- Press 8 to display courses statstics"<<endl;
			cout << "- Press any key to close the program" << endl;

			int x;
			while (!(cin >> x)) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Error: Invalid input. " << endl;
				cout << "Please enter an integer option : " << endl;
			}
			x = int(x);
			if (x == 1) {
				alladmins[0].AddNewStudent(allstudents, allcourses);

			}
			else if (x == 2) {
				alladmins[0].Addcourse(allcourses);
			}
			else if (x == 3) {
				alladmins[0].ViewStudentsEnrolled(enrolledstudentsid);
			}
			else if (x == 4) {
				alladmins[0].EditCourse(allcourses);
			}
			else if (x == 5) {
				alladmins[0].AddCourseGrade(allstudents, allcourses);
			}
			else if (x == 6) {
				int id;
				cout << "Please enter the student id to check his courses :" << endl;
				while (!(cin >> id)) {
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Error: Invalid input. " << endl;
					cout << "Please enter an integer ID : " << endl;
				}
				alladmins[0].DisplayInProgressCourses(id, allstudents);
			}
			else if (x == 7) {
				int id;
				cout << "Please enter the student id to check his courses :" << endl;
				while (!(cin >> id)) {
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Error: Invalid input. " << endl;
					cout << "Please enter an integer ID : " << endl;
				}
				alladmins[0].DisplayfinishedCourses(id, allstudents);
			}
			else if (x == 8)
			{
				data_analysis d2;
				d2.courses_stats(allcourses, allstudents);
			}
			else {
				cout << "Waiting to see you again !" << endl;
				break;
			}
		}

	}

	//student portal
	else if (student) {
		while (true) {
			cout << "Here is a list for what you can do :" << endl;
			cout << "- Press 1 to see all the courses available for you" << endl;
			cout << "- Press 2 to filter the courses " << endl;
			cout << "- Press 3 to register for a course " << endl;
			cout << "- Press 4 to Edit your password " << endl;
			cout << "- Press 5 to View your Courses " << endl;
			cout << "- Press 6 to view your courses grades and your gpa " << endl;
			cout << "- Press any key to close the program" << endl;
			int x;
			cin >> x;
			x = int(x);
			if (x == 1) {
				allstudents[studentid].ViewAllAvaillableCourses(allcourses, allstudents, enrolledstudentsid, studentid);

			}
			else if (x == 2) {
				allstudents[studentid].FilterCourses(allcourses);
			}
			else if (x == 3) {
				allstudents[studentid].RegisterForCourse(allcourses, allstudents, enrolledstudentsid, studentid);
			}
			else if (x == 4) {
				allstudents[studentid].EditStudentData(allstudents, studentid);
			}
			else if (x == 5) {
				allstudents[studentid].ViewAllCourses(allstudents, studentid);
			}
			else if (x == 6) {
				allstudents[studentid].ViewGradeAndGPA(allstudents, studentid);
			}
			else {
				cout << "Waiting to see you again !" << endl;
				break;
			}
		}
	}

	//Writing the data after finishing the program
	d1.WriteCourseData(allcourses);
	d1.WritePreReq(allcourses);
	d1.WriteStudentData(allstudents);
	d1.WriteInProgressCourses(allstudents);
	d1.WriteFinishedCoursesData(allstudents);
	d1.WriteAdminData(alladmins);

}




//Login function
void Login() {

	bool exist = 0;

	while (exist == 0)
	{
		cout << "                                    Welcome To Ain Shams University System " << endl;
		cout << "Please enter your email and password: " << endl << endl;
		string Email, password;
		cout << "Email: ";
		cin >> Email;
		cout << endl << "Password: ";
		cin >> password;
		//Check if the user is admin

		for (int i = 0; i < alladmins.size(); i++) {
			if (alladmins[i].Name == Email && alladmins[i].pass == password) {
				cout << "Hello " << alladmins[i].Name << "!" << endl;
				cout << "Now you are accessing the admin portal :)" << endl;
				admin = 1;
				exist = 1;
				return;
			}
		}

		//Check if the user is a student

		for (int i = 0; i < allstudents.size(); i++) {
			if (allstudents[i].Email == Email && allstudents[i].Password == password) {
				cout << "Hello " << allstudents[i].Name << "!" << endl;
				studentid = i;
				student = 1;
				exist = 1;
				return;
			}
		}

		cout << "Error: User does not exist" << endl;

	}


}