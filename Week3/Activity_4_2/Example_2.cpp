// Where we need "return" statement in void function
#include <iostream>

void Division();

using namespace std;

int main()
{
    while (1)
        Division();
    return 0;
}

void Division()
{
    int a;
    int b;
    cout << endl;
    cout << "Please enter two integer numbers seperated by a single space" << endl;
    cout << endl;
    cin >> a >> b;

    if (b == 0)
    {
        cout << "Dividing a number to zero is not possible";
        return;
    }
    cout << "Your division result is : " << (a / b) << endl;
}