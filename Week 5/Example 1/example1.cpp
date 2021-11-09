/*Example 1 Start*/
/*
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[8], s2[8];
    int length1, length2;
    int count = 0;

    // Initialize Strings
    strcpy(s1, "Black");
    strcpy(s2, "Black");

    // After the first time ask the user to enter them
    cout << "Now I let you enter two strings \n";
    cout << "Enter first string, then second \n";
    cin >> s1 >> s2;

    // Find Length
    length1 = strlen(s1);
    length2 = strlen(s2);

    // Compare lengths
    if (length1 = length2)
    {
        cout << "The two strings are the same length, are they same ?\n";
    }

    // Compare content
    if (!strcmp(s1, s2))
    {
        cout << "The strings: " << s1 << " and " << s2 << " are the same " << endl;
    }
    else
    {
        cout << "The strings: " << s1 << " and " << s2 << " are NOT the same " << endl;
    }

    return 0;
}

*/

/*Example 1*/

#include <iostream>
#include <cstring>
using namespace std;

//radar
//racecar

void isPalindrome(char str[])
{
    int startIndex = 0;
    int finalIndex = strlen(str) - 1; // Because of null character

    while (finalIndex > startIndex)
    {
        if (str[startIndex++] != str[finalIndex--])
        {
            cout << str << " is NOT palindrome";
            return;
        }
    }
    cout << str << " is palindrome";
}

int main()
{
    char s1[32], s2[16];
    int length;
    int count = 0;

    // Initialize Strings
    strcpy(s1, "race");
    strcpy(s2, "car");

    // After the first time ask the user to enter them
    cout << "Please enter two strings with a blankspace" << endl;
    cout << "Don't forget not to reach maximum char size [32] " << endl;
    cin >> s1 >> s2;

    strcat(s1, s2);
    //cout << s1;

    isPalindrome(s1);

    return 0;
}
