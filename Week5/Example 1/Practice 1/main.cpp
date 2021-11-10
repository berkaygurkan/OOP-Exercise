// Strings and Vectors

// Objectives of today
/*
1) Learn to declare, initialize, and use strings
2) Learn about C-string values and variables
3) Learn about the standard string class
4) Learn about vectors
*/

// C-Strings    : Array with base type of char that stores string of characters
// Class String : New way of string implementation on cpp
// Vectors      : Array that can grow or shrink. Their size can be changed during runtime.

/* C- Strings*/
// Array with a character
// Ends with a null ('\0') in order to indicate the end of real part characters (not empty)

// How to Declare (1)
// char ArrayName[MaxStringCharNum +1];

// How to Initialize (1)
// char ArrayName[MaxStringCharNum+1]="Hello";

// What is null character (2)
// char myString[6]="Hello";
// myString[0] = 'H';
// myString[1] = 'e';
// myString[2] = 'l';
// myString[3] = 'l';
// myString[4] = 'o';
// myString[5] = '\0';

#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main()
{
    // We dont need to fill whole size (3)
    char myString1[15] = "Hello";
    char myString2[500] = "HeyHey";

    // We cant use = to initialize char array (4)
    char myString3[6];
    //myString3 = "Hello";

    // String Copy (5)
    strcpy(myString3, "Hello");
    // strncpy(myString3, "Hello", 2); // Leave room for null

    cout << myString1 << endl;
    cout << myString3 << endl;

    // Array Indices (6)
    cout << myString3[0] << endl;

    // Compare C-Strings(7)
    /*if (myString1 == myString3) // Doesnt give you compile error but result is wrong!!
    {
        cout << "Those strings are the same" << endl;
    }
    else
        cout << "Those strings are NOT the same" << endl;
*/
    // strcmp (8)
    if (!strcmp(myString1, myString3)) // Dont forget to add !
    {
        cout << "Those strings are the same" << endl;
    }
    else
        cout << "Those strings are NOT the same" << endl;

    // Chaining (concatenate) strings (9)
    //strcat(myString1, myString3);
    strncat(myString1, myString3, 2);
    cout << "After adding second string to first string, firs string became : " << myString1;

    // Input Output with C-Strings (10)
    char a[80];
    char b[80];

    // Using >> notation breaks strings with special characters
    cout << "\n Please type two chars : ";
    //cin >> a >> b;

    // We can get whole line with getline member function
    cin.getline(a, 80);
    cin.getline(b, 80);

    cout << a << b;

    // Convert C-string to other base types (int float double...) (11)
    char myNumCharArray[] = "123";
    char myNumCharArrayFloat[] = "1234.45";

    int i = atoi(myNumCharArray);
    float f = atof(myNumCharArrayFloat);

    cout << "Converted integer from array is " << i;
    cout << "Converted float from array is " << f;

    return 0;
}
