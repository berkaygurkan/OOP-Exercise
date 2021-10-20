/*  EXAMPLE 1  */

// Example void function (Instructions of program)
// Main idea of the function is to inform user about how program works.
// Program will compute total cost of purhaces made by user, by adding tax and substract discount.

#include <iostream>
using namespace std;

void instructions(); // This program will print basic information about program.

int main()
{
    // Instructions
    instructions();
    /* Get information from user
    ...
    ...
    ...
    */

    /* Process
    ...
    ...
    ...
    */

    /* Print Output
    ...
    ...
    ...
    */

    return 0;
}

void instructions()
{
    cout << endl;
    cout << "This program will compute total cost of purchases made by user" << endl;
    cout << "Program will apply %5 tax to total cost of items minus any discount" << endl;
    cout << "Input of the program is the cost of each item, quantity and the discount" << endl;
    cout << "The output of the program is grand total cost off all items" << endl;
    cout << endl;

    return; // Using "return" statement in the of the function body is optional.
}