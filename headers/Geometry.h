//inclue pre-processor directives
#include <iostream>

// use C++ stardard library namespace
using namespace std;

//declare the class
class Geometry{
    // class members (fields, constructors, methods)
    // may have the following access modifers: private,
    // public, protected
    // this class is going to be an abstract classs
    // (like a java interface) b/c its only method is
    //going to be virtual; it will have a declaration only 
    // and not a body
    // must use the keyword virtual when declaring virtual
    // methods and must initialize virtual methods to zero
    public:
        virtual void compute() = 0; 

};