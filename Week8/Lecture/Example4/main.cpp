/*Destructor*/
/*Copy Constrcutor*/
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

    cout << string1 << endl;
    cout << string2 << endl;

    string2 = string1;

    cout << string1 << endl;
    cout << string2 << endl;

    return 0;
}

StringVar::StringVar(int size) : maxLength(size)
{
    value = new char[maxLength + 1]; //+1 is for '\0'.
    value[0] = '\0';
}
StringVar::StringVar() : maxLength(100)
{
    value = new char[maxLength + 1]; //+1 is for '\0'.
    value[0] = '\0';
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