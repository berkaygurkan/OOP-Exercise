
#include <iostream>
using namespace std;

// How to declare pointer
// Type_Name *varName

// dynamic variables
// automatic variables
// global variables

double *p1, *p2;
double v1, v2;

int main()
{
    // Pointers
    cout << "******************" << endl;
    p1 = &v1;
    p2 = &v2;
    v1 = 25;
    *p2 = *p1 + 5;

    cout << v1 << endl;
    cout << *p1 << endl;
    cout << *p2 << endl;
    cout << "******************" << endl;

    // new
    cout << "******************" << endl;
    p1 = new double;
    cout << "Please enter a number " << endl;
    cin >> *p1;
    *p1 = *p1 + 5;
    cout << *p1 << endl;

    // delete
    delete p1;
    cout << *p1;
    cout << "******************" << endl;

    // Another way of declaring by using typdef

    typedef double *DblPtr;

    DblPtr p3, p4;
    // Pointers
    cout << "******************" << endl;
    p3 = &v1;
    p4 = &v2;
    v1 = 25;
    *p4 = *p3 + 5;

    cout << v1 << endl;
    cout << *p3 << endl;
    cout << *p2 << endl;
    cout << "******************" << endl;

    return 0;
}