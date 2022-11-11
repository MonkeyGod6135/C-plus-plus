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

//declare another struct for a person usign
//type definition. A type definition defines 
//an allis for a struct that allows the alias
//to be used like a primitve data type.
typedef struct {
    // declare two memebers in the person struct
    float heightInMeters;
    int weightInKilos;
} PersonType; // this is the alias


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

    //declare a person struct using the alias (type defination)
    PersonType p;

    // assign values to the members of the Person struct
    p.heightInMeters = 1.8;
    p.weightInKilos = 96;

    // display values in members
    cout << "Person's weight is " << p.weightInKilos << " Kilogarms" << endl; 
    cout << "Person's height is " << p.heightInMeters << " Meters" << endl; 
}

/* this function will have a person struct as a parameter. it will compute and return the bmi
of the person struct */
float bodyMassIndex(struct Person p){
    return p.weightInKilos / (p.heightInMeters * p.weightInKilos);
}