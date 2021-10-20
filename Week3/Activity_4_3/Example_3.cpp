// Void function to display with a specific number of decimal points

#include <iostream>
using namespace std;

void display_this(double x, int precision);
void display_this(double x, double y, int precision);

int main()
{
    display_this(13.0, 4);
    display_this(13.123, -52.3214, 4);
    return 0;
}

void display_this(double x, int precision)
{
    cout.setf(ios::fixed);     // Changes format, fixed or scientific.
    cout.setf(ios::showpoint); // When the showpoint format flag is set, the decimal point is always written for floating point values
                               // inserted into the stream (even for those whose decimal part is zero).
    cout.precision(precision); // Defines significant digit.

    cout << x << endl;
}

void display_this(double x, double y, int precision)
{
    cout.setf(ios::fixed);     // Changes format, fixed or scientific.
    cout.setf(ios::showpoint); // When the showpoint format flag is set, the decimal point is always written for floating point values
                               // inserted into the stream (even for those whose decimal part is zero).
    cout.precision(precision); // Defines significant digit.

    cout << x << " " << y << endl;
}