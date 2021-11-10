// C String : Arrray with base type of char that stores strings of characters
// Class String : New way of string implementing strings (Cpp)
// Vectors: Array that can grow or shrink. Their size can be changed during promgram running.

// How to Declare and Initialize
// sting s1
// string s2('Hello')

#include <iostream>

// In order to use string class we have to add string lib (1)
// and using namespace std
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;

// How to declare / initiazlize (2)
// string s1;
// string s2("Hello")

int main()
{
    //(2)
    string s1;
    string s3;
    string s2("Hello2");

    // We can use = operators easily (3)
    s1 = "Hello1";

    cout << s1 << endl;
    cout << s2 << endl;

    // Can be compared with == (4)
    if (s1 == s2)
    {
        cout << "Strings are the same" << endl;
    }
    else
        cout << "Strings are NOT the same" << endl;

    // Can be easily concatenad with + (5)
    //s3 = s1 + s2;
    //cout << s3 << endl;

    // + operator overload C-Strings too
    char myEmptyCString[] = " ";
    s3 = s1 + myEmptyCString + s2;
    cout << s3 << endl;

    // IO (6)
    string s4;
    string s5;

    // >> this operator omits blanks space
    cout << "Please enter a string";
    //cin >> s4 >> s5;

    // We can use getline (not member function) to get line
    getline(cin, s4);
    getline(cin, s5);

    // We can use special character (7)
    //getline(cin, s4, '*');
    //getline(cin, s5, '*');

    cout << s4 << s5;

    // String processing with class type string (8)
    // Show table
    string longStr = "Hey its Berkay";
    string shortStr = "its";

    int indexPosition = 0;

    indexPosition = longStr.find(shortStr);
    cout << indexPosition;

    longStr.erase(indexPosition, 3);

    cout << endl;
    cout << longStr;

    // C-String to Class conversions (10)
    char aCString[] = "This is my C-String";
    string stringVar;

    stringVar = aCString; // Char to Class Type String
    //aCString = stringVar;                // ILLEGAL
    //strcpy(aCString, stringVar);         // ILLEGAL
    strcpy(aCString, stringVar.c_str()); // legal

    cout << stringVar;

    // Class type string to other base types(int float double)
    // #include <cstdlib>

    int i;
    double d;
    string s;

    i = stoi("35");
    d = stod("35.4");
    s = to_string(d * 2);

    cout << i << endl;
    cout << d << endl;
    cout << s << endl;

    return 0;
}