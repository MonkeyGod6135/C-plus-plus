// include pre-processor directive
#include <iostream>
#include "./headers/BasicIO.h"
#include "./headers/Decisions.h"
#include "./headers/Loops.h"
#include "./headers/Functions.h"
#include "./headers/Structs.h"

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
}