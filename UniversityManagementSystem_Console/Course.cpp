#include "Course.h"
#include "Admin.h"
#include "Student.h"

//Course constructor
Course::Course(string coursename, string coursecode, int coursehours, bool requiring, int Num_Of_Students, vector<string>Prerequisite_courses, string Instructor_Name)
{
    name = coursename;
    code = coursecode;
    hours = coursehours;
    elective = requiring;
    Max_Number_Of_Students = Num_Of_Students;
    Prerequisite = Prerequisite_courses;
    instructor = Instructor_Name;
}





