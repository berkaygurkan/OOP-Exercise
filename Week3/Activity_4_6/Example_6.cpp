// Function calling another function
// FuncA will be called inside of FuncB

#include <iostream>
using namespace std;

double Func_B();
void Func_A(double &x);

int main()
{
    double y;

    y = Func_B();

    cout << "Y value is : " << y << endl;

    return 0;
}

double Func_B()
{
    double x = 1.1;

    Func_A(x);

    return x;
}

void Func_A(double &x)
{
    cout << "Hi its Func A" << endl;
    return;
}