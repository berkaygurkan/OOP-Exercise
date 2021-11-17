#include <iostream>
#include <string>
using namespace std;

/* Dynamic variables using pointers
  1) Input from the keyboard the area_value and its units as double and string. 
  Compute one-half and one-quarter of the area and display the results by using dynamical variable.
  2) Destroy the dynamic variable at the end*/

int main()
{
    cout << "Please enter area unit and size accordingly " << endl;
    cout << "Unit :";
    string *p1 = new string;
    cin >> *p1;
    cout << "Size : ";
    double *p2 = new double;
    cin >> *p2;

    cout << "Calculation is executing ..." << endl;
    cout << "One half of this area is " << (*p2 / 2.0) << " " << *p1 << endl;
    cout << "One quarter of this area is " << (*p2 / 4.0) << " " << *p1 << endl;

    return 0;
}