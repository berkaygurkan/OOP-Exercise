/* Swap Numbers with void function by using call by reference mechanism.*/

// Lets write a C++ program that asks the user to input two integer values,
// then calls a void function swap to swap the values for the first and second variable.
// Please display the two variables before you call swap and after you call that function.

#include <iostream>
using namespace std;

void get_numbers(int &num1, int &num2);
void swap_numbers(int &num1, int &num2);

int main()
{
    int a;
    int b;
    get_numbers(a, b);

    cout << "Before you swap numbers you entered " << a << " for num1 and " << b << " for num 2" << endl;
    cout << endl;

    swap_numbers(a, b);

    cout << "After swapping a is " << a << " b is " << b << endl;

    return 0;
}

void swap_numbers(int &num1, int &num2)
{
    int temp; // Temp for temporary variable.
    temp = num1;
    num1 = num2;
    num2 = temp;
}

void get_numbers(int &num1, int &num2)
{
    cout << "Please enter two numbers seperated by a single space : ";
    cin >> num1 >> num2;

    return; // Optional
}