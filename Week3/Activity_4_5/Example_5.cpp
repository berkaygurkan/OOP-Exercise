// Swap Numbers with void function

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