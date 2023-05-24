#include "data_analysis.h"
#include<iostream>
#include<set>
using namespace std;
double  data_analysis::check_the_grade(string grade) {
	double marks = 0.0;
	if (grade == "A+" || grade == "a+")
	{
		marks = 98;

	}
	else if (grade == "A" || grade == "a")
	{
		marks = 95;

	}
	else if (grade == "A-" || grade == "a-")
	{
		marks = 90;

	}
	else if (grade == "B+" || grade == "b+")
	{
		marks = 85;

	}
	else if (grade == "B" || grade == "b")
	{
		marks = 80;

	}
	else if (grade == "B-" || grade == "b-")
	{
		marks = 75;

	}
	else if (grade == "C+" || grade == "c+")
	{
		marks = 70;

	}
	else if (grade == "C-" || grade == "c-")
	{
		marks = 65;

	}
	else if (grade == "D" || grade == "d")
	{
		marks = 55;

	}
	else if (grade == "D-" || grade == "d-")
	{
		marks = 50;

	}
	else if (grade == "f" || grade == "F")
	{
		marks = 0;
	}
	return marks;

}


void data_analysis::courses_stats(vector<Course> courses, vector<Student> students) {
	set<string>finishedcoursesnames;

	for (int i = 0; i < students.size(); i++) {
		for (auto it = students[i].FinishedCourses.begin(); it != students[i].FinishedCourses.end(); ++it) {
			finishedcoursesnames.insert(it->first);
		}
		
	}
	
	for (auto it2 = finishedcoursesnames.begin(); it2 != finishedcoursesnames.end(); ++it2) {
		double average = 0.0;
		int total_students = 0;
		int succeed_students = 0;
		int failed_students = 0;
		string maxgrade, mingrade;
		int maxmark = -9999;
		int minmark = 9999;
		for (int j = 0; j < students.size(); j++) {
			for (auto it = students[j].FinishedCourses.begin(); it != students[j].FinishedCourses.end(); ++it)
			{
				if (it->first == *it2) {
					total_students++;
					average += check_the_grade(it->second);
					if (it->second == "F" || it->second == "f") {
						failed_students++;
					}
					else {
						succeed_students++;
					}
					double temp = check_the_grade(it->second);
					if (temp > maxmark) {
						maxmark = temp;
						maxgrade = it->second;
					}
					if (temp < minmark) {
						minmark = temp;
						mingrade = it->second;
					}
					break;

				}

		}
	}
		cout << *it2 << " average grades is: " << average / total_students << endl;
		cout << "--------------------------------------------------" << endl;
		cout << *it2 << " success rate is: " << (static_cast<double>(succeed_students) / total_students) * 100 << "%" << endl;
		cout << "--------------------------------------------------" << endl;
		cout << *it2 << " failure rate is: " << (static_cast<double>(failed_students) / total_students) * 100 << "%" << endl;
		cout << "--------------------------------------------------" << endl;
		cout << *it2 << " maximum grade is: " << maxgrade << endl;
		cout << "--------------------------------------------------" << endl;
		cout << *it2 << " minimum grade is: " << mingrade << endl;
		cout << "---------------stats for this course ended-------------------" << endl;
	}
}





