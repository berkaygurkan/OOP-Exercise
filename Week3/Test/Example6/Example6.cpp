/* Example 6 */
// Function calling another function

// Lets consider a quadratic equation a^2*x +b*x+c=0
// Lets create a function that gets coefficient of equation with another function and
// calculate delta value (b*b-4*a*c)

#include <iostream>
using namespace std;

void get_coef(double &a, double &b, double &c);
double bb_4ac();

int main()
{
    double result;

    result = bb_4ac();

    cout << "Delta value of quadratic equation is " << result << endl;

    return 0;
}

double bb_4ac()
{
    double a, b, c;
    get_coef(a, b, c);

    return b * b - 4 * a * c;
}

void get_coef(double &a, double &b, double &c)
{
    cout << "Please enter coefficients of quadratic equation from left handside to right hand side : ";
    cin >> a >> b >> c;
}