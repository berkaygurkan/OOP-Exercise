/* EXAMPLE 2 */

// Use case of return value in void function!!!
// Lets create a division of two numbers function

void Division(); // Precondition : This function asks two integer values
                 // Postconditon : The result is first number divided by second number

#include <iostream>

using namespace std;

int main()
{

    Division();

    return 0;
}

void Division()
{
    int num1;
    int num2;

    cout << endl;
    cout << "Please enter two integer numbers seperated by a single space " << endl;
    cout << endl;

    cin >> num1 >> num2;
    if (num2 == 0)
    {
        cout << "Num2 must be non zero value" << endl;
        return;
    }

    int result = num1 / num2;
    cout << "Your division result is :" << result << endl;
}