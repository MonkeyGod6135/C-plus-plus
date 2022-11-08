//inclue pre-processor directives
#include <iostream>
#include <string>

// use C++ stardard library namespace
using namespace std;

void congratulate2(string student, string course, string programmer){
    // The c string len function cannot be used on the C++ string type
    // the c++ length function must be used instead
    int days = programmer.length();

    // the C++ sstring type may not be formatted using the %s format specifer
    // the string type must be converted to a const char * using the C_str()
    // function before it can be formatted.
    //The preferred way to output the C++ string type is by using cout
    printf("%s has done as much %s programming as %s could fit into %d days. \n",
    student.c_str(), course.c_str(), programmer.c_str(), days);
}

void congratulate1(string student, string course, string programmer){
    cout << student << " has done as much " << course << " programming as " << programmer << endl;
    // function delcrations must apper before beiing used
    congratulate2(student, course, programmer);
}

