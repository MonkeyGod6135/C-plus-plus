// include pre-processor directievs
#include <iostream>
#include <string>

#define FIRST_NAME "Dwan"
#define LAST_NAME "Conyers"
#define AGE 22
#define WEIGHT 200

// use C++ libarry namespace
using namespace std;

/* This function will use the cout and the insertion operator
* to write data to stdout
*/
void output(void){
    // cout is object of the output stream of a C++ application (terminal, file)
    // << is the insertion operater and its used to show output to
    // the output stream
    // a newline character is no appened to the end of the output, so
    // we must use the endl command
    cout << "Your first name is " << FIRST_NAME << endl;
    cout << "Your last name is " << LAST_NAME << endl;
    cout << "Your weight name is " << WEIGHT << "and your age is " << AGE << endl;
    cout << FIRST_NAME << " ";
    cout << LAST_NAME << endl;
}

/* This function will use the cin and the extraction operator
* to input data from stdin
*/
void input(){
    //declare variables to store input data
    int age;
    float weight;
    // C++ has a string type
    string name;

    //input an int from stdin
    cout << "Enter you age: ";
    // cin is an object of the input stream of C++ application 
    // >> is the extraction operator and its used to read input from 
    // the input stream and place it in a variable
    cin >> age;
    cout << "Entered age is: " << age << endl;

    //input a float from stdin
    cout << "Enter your weight: ";
    cin >> weight;
    cout << "Entered weight is: " << weight << endl;

    //input a float and an int
    cout << "Enter your weight and age: ";
    cin >> weight >> age;
    cout << "Entered weight is: " << weight << " and entered age is: "<< age << endl;

    //input a string
    cout << "Enter your full name: ";
    // cin stops reading when it encounters an empty space
    //cin >> name; // 
    // getline reads a full linefrom the input stream, including the newline
    // charcter genetraed when the endter key is pushed. This can prevent it 
    // from reading the actual input string, we must call the ignore 
    //function before called the getline
    cin.ignore();
    getline(cin, name);
    cout << "Entered full name is: " << name << endl;

}