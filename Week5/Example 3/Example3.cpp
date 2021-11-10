/*Example 3*/
// Converting between String Objects and C-Strings
// Using I/O with string.

/*
0) Create input.txt with previous examples sentences
1) Create input and output file.
2) Take input output file names as class type string.
3) Open input and ouput file using string object to c type string.
4) Take inputs content on C-String
5) Change C-String to Class String
6) Make Corrections (Example2)
7) Output Corrected text 


*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>
#include <string>

using namespace std;

void changeStr(string &myString, string substring, string change)
{

    while (myString.find(substring) != string::npos)
    {
        int posString = myString.find(substring);
        myString.erase(posString, substring.size());
        myString.insert(posString, change);
    }
}

int main()
{
    int i = 0;
    string input_file;
    string output_file;

    char myText[1000];
    ifstream in_s;
    ofstream out_s;

    cout << "Please input the input file name \n";
    cin >> input_file;

    cout << "Please output the input file name \n";
    cin >> output_file;

    in_s.open(input_file.c_str());
    out_s.open(output_file.c_str());
    if (in_s.fail())
    {
        cout << "Input file opening failed. \n";
        exit(1); // if we couldn't open the file to read from we exit
    }

    if (out_s.fail())
    {
        cout << "Output file opening failed. \n";
        exit(1); // if we couldn't open the file to read from we exit
    }

    while (!in_s.eof())
    {
        in_s.get(myText[i]);
        i++;
    }

    cout << myText << endl;
    cout << endl;

    string myString = myText;

    cout << myString;
    cout << endl;

    changeStr(myString, "Gcc", "gcc");
    changeStr(myString, "G++", "g++");

    cout << "***************";
    cout << endl;

    cout << myString;

    out_s << myString;

    return 0;
}