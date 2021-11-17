#include <iostream>
using namespace std;

// Step (1) What is pointer
// Pointer is a memory address of a variable. We call it as pointer because it points to a variable.
// Lets recall call by reference mechanism. It is automatically done for you inside C++ system.

// Step (2) How to declare pointer
// A variable hold a pointer must be declated to have a pointer type
// Type_Name *variableName,
// double *p1;
// int *p2;
// There must be asterix before each pointer variable
int *p1, *p2, v1, v2; // p1 and p2 are pointer, v1 and v2 are variable

int main()
{
    v1 = 5;

    // Step (3) How to assign variable to pointer variable
    // We can use reference opeator & to determine address of variable and assign to pointer
    p1 = &v1;

    // Step(4) How to dereference variable by using pointers
    cout << v1 << endl;
    cout << *p1 << endl;

    // Step(5) What if I change variable name using dereferencing mechanism
    *p1 = 45;
    cout << v1 << endl;
    cout << *p1 << endl;

    // Step(6) Differences between *p1=*p2 and p1=p2
    // p1=p2 assigns pointer to another pointers
    // *p1=*p2 Illegal
    p2 = p1;
    cout << v1 << endl;
    cout << *p1 << endl;
    cout << *p2 << endl;

      // Step (7) How to create dynamical variable
    // Since pointer can be used to refer a varaible, our program can manipulate variable even if there is no identifiers (names)
    // we use new operator creating variable that has no identifiers
    int *p4;
    p4 = new int;

    // we can use this variable as normal variable by dereferencing
    cin >> *p4;
    *p4 = *p4 + 20;
    cout << *p4 << endl;

    // Step (8) We can use delete operator to eleminate dynamical varaible.
    delete p4;
    cout << *p4 << endl;

    // Step (9) Using *(asterix) operator in pointers may be hard to code
    // we can use typedef mechanism for pointers too
    // typedef Know_Type_Definition New_Type_Name

    typedef int *IntPtr;

    IntPtr p5; // == int* p5

    return 0;
}
