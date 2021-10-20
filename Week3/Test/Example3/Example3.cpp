/* EXAMPLE 3*/

// Void funtion use case : void function which displays number with a specific number of decimal points
// How to overload function to print two numbers in the same time.

void myDisplay(double x, int precision); // This function gets number and precision and prints number
                                         // with a desired decimal points.

void myDisplay(double x, double y, int precision); // This function gets number and precision and prints number
                                                   // with a desired decimal points.

#include <iostream>
using namespace std;

int main()
{
    myDisplay(13.1234, 4);
    myDisplay(12.1234, -54.123, 5);
    return 0;
}

void myDisplay(double x, int precision)
{
    cout.setf(ios::fixed);     // Changes format, fixed or scientific
    cout.setf(ios::showpoint); // When it is set, decimal point is always written for floating
                               // point
    cout.precision(precision); // Defines significant digit number.

    cout << x << endl;
}

void myDisplay(double x, double y, int precision)
{
    cout.setf(ios::fixed);     // Changes format, fixed or scientific
    cout.setf(ios::showpoint); // When it is set, decimal point is always written for floating
                               // point
    cout.precision(precision); // Defines significant digit number.

    cout << x << "  " << y << endl;
}