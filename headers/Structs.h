//inclue pre-processor directives
#include <iostream>

// a strucet is a colluction of releated data (members)
// the members may be only fieds (varibales)
// the members may be of differnt types
//declare a struct for a person
struct Person
{
    // declare two members in the struct
    float heightInMeters;
    int weightInKilos;
};


// use C++ stardard library namespace
using namespace std;

/* This function uses the person struct for purposes
* of displaying the values in its members */
void accessStructMembers(void){
    // declare a person struct
    struct Person person;

    // assign values to the members of the Person struct
    person.heightInMeters = 1.8;
    person.weightInKilos = 96;

    // display values in members
    cout << "Person's weight is " << person.weightInKilos << " Kilogarms" << endl; 
    cout << "Person's height is " << person.heightInMeters << " Meters" << endl; 
}