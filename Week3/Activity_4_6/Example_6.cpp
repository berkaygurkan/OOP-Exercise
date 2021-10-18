// Function calling another function

#include <iostream>

using namespace std;

void Func_A(double &x)
{
    return;
}

double Func_B()
{
    double x = 1.1;

    Func_A(x);

    return x;
}

int main()
{
    double y;

    y = Func_B();

    cout << "Y value is : " << y << endl;

    return 0;
}
