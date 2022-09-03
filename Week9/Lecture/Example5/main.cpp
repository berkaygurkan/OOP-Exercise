/*Example 4 - Destructor, CopyConstructor = Operator*/
// The copy constructor, the assignment operator (=) and the destructor are called the big three because
//  if you need to define any of them , then you need to define all three.
// For any class that uses pointers and the new operator, it is safest to define your own copy constructor,
// overloaded =, and destructor.

/*
// Constructor is a special kind of member function that is automatically called when obhect of that class
// is declared
Rules
1 - Constructor must have same name as class
2 - It cannot return value (even void!!!)
*/

/*
// Destructor is a special kind of member function that is automatically called when object of that class
// is passes out of scope. They are mainly used eleminate any dynamical array that is created inside object.
Rules
1) Same rules for constructor but name should start with Tilde(~)symbol
*/

/*
Copy Constrcutor is constructor that has one parameter that is the same type as class
- This parameter must be call by reference with const parameter modifier.
- It creates a deep copy when initializing object by using another object
ClassName::ConstructoName(const ClassName& theObject)
*/

/*
Overloading assignment operator (=)
When we use standart assignment operator without dynamical arrays it may not create problems
*/

/*= operator*/
#include <iostream>
using namespace std;

// We know that special member function constructor is called automatically when an object is first created.
// On the contrary when object goes out of scope or is destroyed, special member function called destructor is called automatically
// A destructor has a same name with constructor but preceed with tilde~
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <cstring>

using namespace std;

class StringVar
{
public:
    StringVar(int size);
    StringVar();
    StringVar(const char a[]);
    StringVar(const StringVar &stringObject);
    ~StringVar();
    void operator=(const StringVar &rightside);

    int length() const;

    void inputLine(istream &ins);
    friend ostream &operator<<(ostream &outs, const StringVar &theString);

private:
    char *value;
    int maxLength;
};

int main()
{
    StringVar string1("Selam ben Berkay");
    StringVar string2("mert");
    StringVar string3(string1);

    cout << string1 << endl;
    cout << string2 << endl;
    cout << string3 << endl;
    string2 = string1;

    cout << string1 << endl;
    cout << string2 << endl;
    cout << string3 << endl;

    return 0;
}

StringVar::StringVar(int size) : maxLength(size)
{
    value = new char[maxLength + 1]; //+1 is for '\0'.
}
StringVar::StringVar() : maxLength(100)
{
    value = new char[maxLength + 1]; //+1 is for '\0'.
}
StringVar::StringVar(const char a[]) : maxLength(strlen(a))
{
    value = new char[maxLength + 1]; //+1 is for '\0'.
    strcpy(value, a);
}
StringVar::StringVar(const StringVar &stringObject) : maxLength(stringObject.length())
{
    value = new char[maxLength + 1]; //+1 is for '\0'.
    strcpy(value, stringObject.value);
}
StringVar::~StringVar()
{
    delete[] value;
}
int StringVar::length() const
{
    return strlen(value);
}

// Uses iostream:
void StringVar::inputLine(istream &ins)
{
    ins.getline(value, maxLength + 1);
}

// Uses iostream:
ostream &operator<<(ostream &outs, const StringVar &theString)
{
    outs << theString.value;
    return outs;
}

void StringVar::operator=(const StringVar &rightside)
{
    int newLength = strlen(rightside.value);
    if (newLength > maxLength)
    {
        delete[] value;
        maxLength = newLength;
        value = new char[maxLength + 1];
    }
    for (int i = 0; i < newLength; i++)
    {
        value[i] = rightside.value[i];
    }
    value[newLength] = '\0';
}