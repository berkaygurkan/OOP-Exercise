// Void function to display with a specific number of decimal points

#include <iostream>

using namespace std;

void display_this(double x, int precision);

int main()
{
    display_this(13.123456, 4);
    return 0;
}

void display_this(double x, int precision)
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(precision);

    cout << x << endl;
}