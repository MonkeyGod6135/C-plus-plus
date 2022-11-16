//inclue pre-processor directives
#include <iostream>
#include <stdexcept> // needed to throw exceptions
#include <iomanip> // needed format output
#include <math.h> // needed to preform area computation
#include "Geometry.h" 
#include "Circle.h"


// use C++ stardard library namespace
using namespace std;

// decalre Cylinder class and specify that it's a subclass
//of circle
// must specify the acess level of the superclass since its
//not an abstract class
class Cylinder : public Circle
{
    private:
        //declare fields
        int height;
        double volume;
    public:
        //declare constructors
        Cylinder()
        {
            // when calling a super-class member, the call must be
            //prefixed with the name of the super-class and the resoultion operator
            this->Circle::setRadius(0);
            height = 0;
        }

        Cylinder(int radius, int height)
        {
            // check if we've been given an invalid argument - radius less than zero
            if (radius < 0){
            //throw an exception
            throw invalid_argument("Radius must be greater than or equal to zero.");
            }
            // check if we've been given an invalid argument - radius less than zero
            if (height < 0){
            //throw an exception
            throw invalid_argument("Radius must be greater than or equal to zero.");
            }

            this->Circle::setRadius(radius);
            this->height = height;
        }
        // define getter and setter method field
        void setHeight(int height)
        {
            // check if we've been given an invalid argument - radius less than zero
            if (height < 0){
            //throw an exception
            throw invalid_argument("Radius must be greater than or equal to zero.");
            }
            this->height = height;
        }
        void getHeight(int& height) const // the const keyword at the end of the method declares that
        // the method won't change any of the field values
        // attempting to do so will result in a complier error
        {
            height = this->height;
        }
        void getVolune(double& volume) const
        {
            volume = this->volume;
        }
        void compute()
        {
            double area;
            this->Circle::getArea(area);
            volume = height * area;
        }

        void PrintCylinder()
        {
            double area;
            this->Circle::getArea(area);
            int radius;
            this->Circle::getRadius(radius);

            cout << fixed << showpoint;
            cout << setprecision(5);

            cout << "radius" << radius << ", area=" << area << ", height=" 
            << height << ", volume=" << volume << endl;
        }

        bool equalCylinder(const Cylinder& otherCylinder) const
        {
            return (height == otherCylinder.height && 
            volume == otherCylinder.volume);
        }

};