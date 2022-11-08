//inclue pre-processor directives
#include <iostream>

// use C++ stardard 
using namespace std;

#define STOP 0
#define START 10
//define macro expression
#define condition(i) (i > STOP)
#define break(i) (i == 5)
#define continue(i) (i % 2)

// this function will use a while loop
void loops1(void){
    //declare loop counter
    int i = START;
//set up loop
//use macro expression as condition
    while(condition(i)){
    cout << i << " ";
    i--;
    }
    cout << "blastoff" << endl;
}