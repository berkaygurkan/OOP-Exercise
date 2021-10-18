// Function calling another function - Example
// Consider a^2*x + b*x+c = 0 equation.
// Lets create a function that gets coefficients of equation with another function and
// calculate delta value (b*b-4*a*c)

#include <iostream>
using namespace std;

void get_coefficients(double &a, double &b, double &c);
double bb_4ac();

int main()
{
    cout << "Process is starting " << endl;
    cout << endl;

    double result = bb_4ac();

    cout << "Result is " << result;

    return 0;
}

void get_coefficients(double &a, double &b, double &c)
{
    cout << "Please enter coeffiecient of quadratic equation from left handside to right hand side" << endl;
    cout << endl;
    cin >> a >> b >> c;
}

double bb_4ac()
{
    double a, b, c;
    get_coefficients(a, b, c);

    return b * b - 4 * a * c;
}
