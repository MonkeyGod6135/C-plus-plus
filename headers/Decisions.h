//inclue pre-processor directives
#include <iostream>

#define NUM 34568.80

using namespace std;

void decisions1(void){
    //declare a variable of type float
    //int it using constant defined in header file
    float num = NUM;

    //use if statement
    if (num <40000.0){
        printf("Num (%.2f) is less than 40000.0 \n", num);
    }

    num += num;
    //use if else statement
    if (num <40000.0){
        printf("Num (%.2f) is less than 40000.0 \n", num);
    } else {
        printf("Num (%.2f) is not less than 40000.0 \n", num);
    }

    num = 0.0;
    //use if-else-if
    if (num == 0.0){
        printf("Num (%.2f) is equal to 0.0 \n", num);
    } else if (num < 40000.0){
        printf("Num (%.2f) is less than 40000.0 \n", num);
    } else {
        printf("Num (%.2f) is not less than 40000.0 \n", num);
    }

}