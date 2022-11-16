// include pre-processor directive
#include <iostream>
#include "./headers/BasicIO.h"
#include "./headers/Decisions.h"
#include "./headers/Loops.h"
#include "./headers/Functions.h"
#include "./headers/Structs.h"
#include "./headers/Cylinder.h"

// In C++, a namespace is a collection of related identifiers
// (functions, classes, objects, variables).

//The C++, startdard library identifiers are denfned in a namespace
// called std.

// A way to bring a specififc identifier of the std namespace into 
//a C++ is with the help of the using declaration.
// using std::cout; //

// A way to bring all the identifiers of the std namespace into a 
// C++ application as if they were declared globally is with the help of the 
// using namespace statement
using namespace std;

int main(){
    // In oder to use a C++ standard library identifer, like cout,
    // we need to specifiy that it belongs to the std namespace. One
    // way to do this is by using the scope resloution operator ::
    // std::cout << "Hello World!"; //

    // cout << "Hello World!";
    // BasicIO
   // output();
   // input();
    // Decisions
    //decisions1();
    //loops1();
    //congratulate1("Dwan", "C++", "Bjarne Stoustrup");
    accessStructMembers();

    //declare a person struct
    struct Person p;

    // assign values to its members 
    p.heightInMeters = 1.52;
    p.weightInKilos = 56;

    // call the bodyMassIndex function passing the struct
    // as an arguement output the return from the bodyMassIndex function
    cout << bodyMassIndex(p) << endl;

    //declare and initalize circel oject using the no-arg constructor
    Circle circle1;

    //decalre local variables that we will use when calling circile 1 getters
    int radius;
    double area;

    cout << "Circle 1: ";
    circle1.printCircle();

    circle1.setRadius(5);
    cout << "Circle 1: ";
    circle1.printCircle();

    circle1.compute();
    cout << "Circle 1: ";
    circle1.printCircle();

    // When a getter method, must provide local variable
    //as argument. The value in the field will be placed by the 
    // getter method into the address of the local variable.
    circle1.getRadius(radius);
    cout << "Radius 1: " << radius << endl;

    circle1.getArea(area);
    cout << "Area 1: " << area << endl;

    //decalre and initalize circle object using one arg construct
    Circle circle2(3);

    cout << "Circle 2: ";
    circle2.printCircle();

    circle2.compute();
    cout << "Circle 2: ";
    circle2.printCircle();

    cout << "circle 1 equals Circle 2 ? " << circle1.equalCircle(circle2) << endl;
    cout << "circle 1 equals Circle 2 ? " << (circle1.equalCircle(circle2) ? "true" : "false" ) << endl;

    //declare and initilzie a cylinder object
    Cylinder cylinder1;

    //fields
    int height;
    double volume;

    cout << "Cylinder 1: ";
    cylinder1.PrintCylinder();

    cylinder1.Circle::setRadius(5);
    cylinder1.Circle::compute();
    cout << "Cylinder 1: ";
    cylinder1.PrintCylinder();

    cylinder1.setHeight(7);
    cylinder1.compute();
    cout << "Cylinder 1: ";
    cylinder1.PrintCylinder();

    cylinder1.getHeight(height);
    cout << "Height 1: " << height << endl;
    cylinder1.getVolune(volume);
    cout << "Volume 1: " << volume << endl;

    Cylinder cylinder2(4,8);

    cylinder2.PrintCylinder();

    cylinder2.compute();
    cout << "Cylinder 2: ";
    cylinder2.PrintCylinder();

     cout << "Cylinder 1 equals Cylinder 2 ? " << (cylinder1.equalCylinder(cylinder2) ? "true" : "false" ) << endl;

}