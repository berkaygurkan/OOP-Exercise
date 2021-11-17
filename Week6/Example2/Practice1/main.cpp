#include <iostream>
using namespace std;

// In C++ an array variable is actually pointer variable
// that holds first indexed variable. Thus any array variable can be assigned
// to pointer variable easily. Step(1)

int main()
{
    int a[10];
    typedef int *IntPtr;
    IntPtr p;

    for (int i = 0; i < 10; i++)
    {
        a[i] = i;
    }

    // We can use the actual size by using pointer dereferencing notation (Step 2)
    p = a;
    // 0 1 2 3 4 5 6 7 8 9
    cout << *(a + 5) << endl;
    cout << *(p + 1) << endl;
    cout << "***********" << endl;

    // We can use square bracket notation too. (Step 3)

    cout << a[4] << endl;
    cout << p[4] << endl;
    cout << "***********" << endl;

    // Array variables can be changed by using dereferencing pointers or square bracket notation (Step 4)
    // 1 2 3 4 5 6 7 8 9 10

    for (int i = 0; i < 10; i++)
    {
        p[i] = i + 1;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }

    // Dynamic Arrays (Step 5)
    // We use same notation for dynamic arrays
    // this will allow us to declare array without any size

    typedef double *DoublePtr;
    DoublePtr p1;
    p1 = new double[15];

    // We can use delete operator
    delete[] p1;

    return 0;
}