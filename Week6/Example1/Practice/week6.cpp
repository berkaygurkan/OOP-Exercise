// Pointers and Dynamical Arrays
// Objectives of today
// 1) Learn about pointers and dynamic variables
// 2) Learn dynamic arrays

// What is pointer ? Step(1)
// Pointer is memory addres of a variable. We call it as a pointer because it points to a variable.
// Lets recall call by ref. mechanism. Call by reference mechanism is done automatically inside C++

// How to declare pointer Step(2)
// A variable hold a pointer must be declared to have a pointer type.
// Type_Name *variableName;
//double *p1;
//int *p2;

// There must be asterix before each pointer variable when we define more than one variable in one line.
#include <iostream>
using namespace std;
int *p1, *p2, v1, v2; // p1 and p2 is pointer, v1 and v2 is ordinary integer var.

int main()
{   /*
    v1 = 5;
    // How to assign variable to pointer Step(3)
    // We can use reference operator (&) to determine address of any variable and assign to pointer.
    p1 = &v1;

    // How to use pointer to reach variable Step(4)
    // In order to reach variable we use * operator. It is called as dereference operation
    cout << "v1 is : " << v1 << endl;
    cout << "v1 by dereferencing p1 : " << *p1 << endl;
    cout << "**********" << endl;

    // What if we change variable by using dereferencing mechanism Step(5)

    *p1 = 25;
    cout << "v1 is : " << v1 << endl;
    cout << "v1 by dereferencing p1 : " << *p1 << endl;
    cout << "**********" << endl;

    // Can we assign one pointer to another pointer Step(6)
    // p2 = p1;
    // *p2 = *p1; ILLEGAL

    int *p2;
    p2 = p1;

    cout << "v1 is : " << v1 << endl;
    cout << "v1 by dereferencing p1 : " << *p1 << endl;
    cout << "v1 by dereferencing p2 : " << *p2 << endl;
    cout << "**********" << endl;

    // What is dynamical variable and how to we declare. Step (7)
    // Lets look at basic memory location :
    //   - freestore / heap : for dynamical variables.
    //   - automatic variables : (local)
    //   - global variables
    // We can delete dynamical variables in order to free our memory.
    // we can use new operator for creating no-name dynamical varaible
*/
    /*
    int *p4;
    p4 = new int;

    cout << "Please enter a number ";
    cin >> *p4;
    cout << "Double of this number is " << 2 * (*p4) << endl;

    // How to delete dynamical numbers Step(8)
    // delete operator.
    delete p4;
    cout << "After deleting pointer Double of this number is " << 2 * (*p4) << endl;

    // We can use typedef mechanism to declare pointers in a easy way. Step(9)
    typedef int *IntPtr;
    IntPtr p5;
*/
    // We can use any type to create a pointer
    // Step (10) We can use any type we want
    int num;
    char c;
    int count;
    float salary;

    // Declaring bunch of pointers that point to nothing (point to null)
    int *numptr;      // declare a pointer variable to an integer
    char *cptr;       // declare a pointer variable to a character
    int *countptr;    // declare a pointer variable to an integer
    float *salaryptr; // declare a pointer variable to a float

    // Making them point somewhere
    numptr = &num;       //numptr is pointing to num
    cptr = &c;           //cptr is pointing to c
    countptr = &count;   //countptr is pointing to count
    salaryptr = &salary; //salaryptr is pointing to salary

    // Assign values to the locations where the pointers point
    *numptr = 2;
    *cptr = 'A';
    *countptr = 100;
    *salaryptr = 3200;

    // Display the contents of those memory locations
    cout << num << endl;
    cout << c << endl;
    cout << count << endl;
    cout << salary << endl;

    return 0;
}