/* Example 4*/
// Predefined character functions

// This program reads one character from the keyboard and will
// convert it to uppercase, if it is lowercase
// convert it to lowercase, if it is uppercase
// display a message, if it is a digit

#include <iostream>
#include <cstdlib> // C Standart Lib for character functions

using namespace std;

int main()
{
    char c;

    cout << "Please enter a character \n";
    cin >> c;

    // Lets make a infinite loop unless pressing 'p'

    while (c != 'p')
    {
        if (isalpha(c)) // check to see if it is a letter of alphabet
        {
            if (isupper(c))
            {
                cout << "Your character " << c << endl;
                c = tolower(c);
                cout << "Your character is in lower is  " << c << endl;
            }
            else if (islower(c))
            {
                cout << "Your character " << c << endl;
                c = toupper(c);
                cout << "Your character is in uppercase is  " << c << endl;
            }
        }
        else if (isdigit(c))
        {
            cout << "Your character " << c << " is a digit" << endl;
        }
        else
        {
            cout << "Your character " << c << " is a space or special character" << endl;
        }

        cout << endl;

        cout << "Please enter a character \n";
        cin >> c;
    }
    return 0;
}
