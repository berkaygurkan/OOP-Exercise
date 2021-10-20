// Example void function (Instruction)
// Main idea of the function is to inform user about program

#include <iostream>
using namespace std;

void instructions()
{
    cout << endl;
    cout << "This program will compute the total cost of purchases made by a user " << endl;
    cout << "The program will apply a 5% tax to the total cost of items minus any discount " << endl;
    cout << "The input to program is the cost of each item, quantity, and the discount" << endl;
    cout << "The output of program is the grand total cost of all items together" << endl;
    cout << endl;
    return; // Using "return" statement in the end of function body is optional in void functions !!
}

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
    ...
    */

    return 0;
}
