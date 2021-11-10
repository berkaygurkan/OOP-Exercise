/*Example 1*/
// C-String Example
/*
1) Take two string from user
2) Compare length
3) Compare content
4) Append second string to end of first string
5) Display mesage on wheter or not whole word is Palindrome (word which is th sam when you write backward)
   // radar
   // racecar
   // madam
*/

#include <iostream>
#include <cstring>
using namespace std;

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

    // Initialize Strings
    strcpy(s1, "race");
    strcpy(s2, "car");

    // After the first time ask the user to enter them
    cout << "Please enter two strings with a blankspace" << endl;
    cout << "Don't forget not to reach maximum char size [32] " << endl;
    cin >> s1 >> s2;

    strcat(s1, s2);

    cout << "After appending second string to first string" << endl;
    cout << s1 << endl;

    isPalindrome(s1);

    return 0;
}
