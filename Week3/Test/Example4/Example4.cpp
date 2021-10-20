/* EXAMPLE 4 */

// Difference between call by value and call by reference
// Main goal of the program is creating a function which will add specific numbers to desired numbers
// by using call by reference mechanism and learn how to return more than one value with a void funciton.

#include <iostream>
using namespace std;

void get_intput(int &i, int &j); // Get numbers from user
void process(int &i, int &j);    // Do summation process

int main()
{
    int i, j;

    get_intput(i, j);
    cout << "I am about to call function process i : " << i << " j : " << j << endl;
    process(i, j);
    cout << "I just came form function process i : " << i << " j : " << j << endl;
    return 0;
}

void get_intput(int &i, int &j)
{
    cout << endl;
    cout << "Please enter two values for i and j sepereted by a single space : ";
    cin >> i >> j;
}

void process(int &i, int &j)
{
    i = i + 10;
    j = j + 20;
    cout << "Inside function process" << endl;
    cout << "I added 10 to i and 20 to j, so i : " << i << " j : " << j << endl;
}