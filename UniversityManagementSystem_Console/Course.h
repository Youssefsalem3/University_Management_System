#pragma once
#include<string>
#include<vector>
#include<map>
using namespace std;
class Course
{
public:
    //Atributes
    string name;
    string code;
    bool elective;
    int Max_Number_Of_Students;
    vector<string> Prerequisite;
    int hours;
    string instructor;

    //functions
    Course(string coursename, string coursecode, int coursehours, bool elective, int Max_num_Of_Students, vector<string> Prerequisite, string instructor);
 
};

