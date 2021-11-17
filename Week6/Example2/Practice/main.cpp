#include <iostream>

using namespace std;

// Step (1) In C++ an array variable is actually pointer variable
// that points first indexed variable. Thus any array variable
// can be assigned to pointer variable easily.

int main()
{
    int a[10];
    typedef int *IntPtr;
    IntPtr p;

    // Assign array to pointer.
    // After we assign p points same memory location as a.
    // p[0]... square bracket notation can be used as long as we assign array to pointer.

    p = a;
    // a = p is not legal

    // We can use pointer like arrays
    // Fill numbers inside array
    for (int i = 0; i < 10; i++)
    {
        a[i] = i;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << p[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        p[i] = i + 1;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }

    // Step (2) Dynamic arrays
    // we use same notation (new) for dynamical arrays
    // this will allow us to declare array without any size
    typedef double *DoublePtr;
    DoublePtr p1;
    int size = 15;
    p1 = new double[size];

    // Step(3) we can use delete operator to eleminate array
    delete[] p1;

    return 0;
}
