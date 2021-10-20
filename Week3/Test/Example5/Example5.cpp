/* EXAMPLE 5 */

// Swapping numbers with a void function using call by reference mechanism
// Lets write a program that asks user to input two integers then call function swap
// to swap values. Display two values befor and after swap function

#include <iostream>

void get_numbers(int &num1, int &num2);
void swap_number(int &num1, int &num2);

using namespace std;

int main()
{
    int myNum1, myNum2;
    // Ask user to input two numbers
    get_numbers(myNum1, myNum2);
    // Print numbers entered
    cout << "Before swap function Num 1 :" << myNum1 << " Num 2 :" << myNum2 << endl;
    // Swap numbers
    swap_number(myNum1, myNum2);
    // Print after swapping numbrs
    cout << "After swap function Num 1 :" << myNum1 << " Num 2 :" << myNum2 << endl;
    return 0;
}

void get_numbers(int &num1, int &num2)
{

    cout << "Please enter two integer values seperated by a single space : ";
    cin >> num1 >> num2;
}

void swap_number(int &num1, int &num2)
{
    int temp; // Temp for temporary variable
    temp = num1;
    num1 = num2;
    num2 = temp;
}