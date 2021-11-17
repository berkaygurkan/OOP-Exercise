
/* Dynamic variables using pointers
  1) Input from the keyboard the area_value and its units. Compute one-half and one-quarter of the area and display the results
  2) Destroy the dynamic variable at the end*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
  cout << "Please enter area unit and size accordingly" << endl;
  cout << "Unit : ";
  string s1;
  cin >> s1;
  cout << "Size : ";
  int *p1;      // Declare pointer
  p1 = new int; // Dynamic variable
  cin >> *p1;

  cout << "Calculation is executing..." << endl;
  cout << "One half of this area is " << (*p1 / 2.0) << " " << s1 << endl;
  cout << "One quarter of this area is " << (*p1 / 4.0) << " " << s1 << endl;

  return 0;
}