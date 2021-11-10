
#include <iostream>
#include <cstring> // Stroes C Type String Functions
#include <cstdlib> // For char array conversions
using namespace std;

#include <string>

// C String : Arrray with base type of char that stores strings of characters
// Class String : New way of string implementing strings (Cpp)
// Vectors: Array that can grow or shrink. Their size can be changed during promgram running.

// How to Declare and Initialize
// sting s1
// string s2('Hello')

string s1("Hello");
string s2;

int main()
{
    string s1("Hello");
    string s2;
    s2 = "World";

    // Easy way to implement
    string s3 = s1 + s2;
    cout << s3 << endl;

    // + can convert C type into Class Type
    string s4 = s1 + " " + s2;
    cout << s4 << endl;

    // Input Output
    string myStr1;
    string myStr2;

    cout << "Please enter a string ";

    // this (>>) operator omits blank namespace
    //cin >> myStr1>>myStr2;

    // To get line
    getline(cin, myStr1);
    getline(cin, myStr2);

    // To get line with special character
    //getline(cin,myStr1,'*');
    //getline(cin,myStr2),'*';

    cout << " Str1 : " << myStr1;
    cout << " Str2 : " << myStr2;

    // String Processing with Class Type
    // Show table

    string longStr = "Hey its Berkay";
    string shortStr = "its";

    int indexPosition = 0;

    indexPosition = longStr.find(shortStr);
    cout << indexPosition;

    longStr.erase(indexPosition, 3);

    cout << endl;
    cout << longStr;

    // Compare strings (== works)

    string myS1 = "berkay";
    string myS2("berkay1");

    if (myS1 == myS2)
        cout << "They are the same";
    else
        cout << "They are NOT the same";

    // Convert between C type and Class type

    char aCString[] = "This is my C type string";
    string stringVariable;
    stringVariable = "Who Worik";

    //aCString = stringVariable // ILLEGAL
    //strcpy(aCString,stringVariable) // ILLEGAL
    strcpy(aCString, stringVariable.c_str()); // LEGAL

    cout << aCString;
    return 0;

    // Convert Class Type to Float Integer
    int i;
    double d;
    string s;
    i = stoi("35");
    d = stod("35.4");
    s = to_string(d * 2);

    cout << i << endl;
    cout << d << endl;
    cout << s << endl;
}