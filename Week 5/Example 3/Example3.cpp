// P11_3. cpp - This program reads some integers from a file and displays:
// The number, number^2, and the sum of all numbers read up to that point
#include <iostream>
#include <fstream> // Step (1)
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
    string input_file; // Step (2)-A
    string output_file;

    char myText[1000];
    ifstream in_s; // Step (2)-B - declaration of the stream of type input
    ofstream out_s;

    cout << "Please input the input file name \n"; // Step (3)-A Get the file name
    cin >> input_file;

    cout << "Please output the input file name \n"; // Step (3)-A Get the file name
    cin >> output_file;

    in_s.open(input_file.c_str()); // Step (3)-B - connect to the input file and test
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