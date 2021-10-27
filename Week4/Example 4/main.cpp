/*Example 4 */
// Predefined Character Functions

// This program reads one character from the keyboard and will
// convert it to uppercase, if it is lowercase
// convert it to lowercase, if it is uppercase
// display a message, if it is a digit

#include <iostream>
#include <cstdlib> // C standart library for character functions
using namespace std;

int main()
{
    char c;

    cout << "Enter a character \n";
    cin >> c;

    while (c != 'p') // p for pause or exit program
    {
        if (isalpha(c))
        {                   //check to see if it is a letter of alphabet
            if (isupper(c)) //check to see if it is uppercase
            {
                c = tolower(c);
                cout << "Your character " << c << " is in uppercase.";
                cout << "Its lowercase case is " << c << endl;
            }
            else
            {
                c = toupper(c);
                cout << "Your character " << c << " is in lowercase.";
                cout << "Its uppercase is " << c << endl;
            }
        }
        else if (isdigit(c))
        {
            cout << "Your character " << c << " is a digit.\n";
        }
        else
        {
            cout << "Your character " << c << " is a space.\n";
        }
        cout << endl;
        cout << "Enter a character \n";
        cin >> c;
    }

    return 0;
}