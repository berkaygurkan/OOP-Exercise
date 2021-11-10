/*Example 2*/
// Class type string
/*
1) Take two sentences from keyboard
2) Combine those sentences in a single sentence.
3) Check for errors( G++ -> g++ and Gcc -> gcc)
4) Make corrections
5) Print corrected result

*/



#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
using namespace std;

void changeStr(string &myString, string substring, string change)
{
    /*
    0) Check if unwanted string is remaining
    1) Find unwanted string and its position on original string
    2) Remove the unwanted string from original string
    3) Insert corrected string in original string
    */


    while (myString.find(substring) != string::npos)
    {
        int posString = myString.find(substring);
        myString.erase(posString, substring.size());
        myString.insert(posString, change);
    }
}

int main()
{
    // Step (1)
    cout << "First Line : ";
    string line1;
    getline(cin, line1);

    cout << "Second Line : ";
    string line2;
    getline(cin, line2);

    // Step (2)
    string line = line1 + line2;

    //changeStr(line, "G++", "g++");
    //changeStr(line, "Gcc", "gcc");
    changeStr(line, "G", "g");
    cout << "\n New String " << endl;
    cout << line << endl;

    return 0;
}