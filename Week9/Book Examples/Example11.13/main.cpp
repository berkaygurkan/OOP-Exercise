#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class StringVar
{
public:
    StringVar();
    StringVar(int size);
    StringVar(const char a[]);
    StringVar(const StringVar &stringObject); // CopyConstructor
    int length() const;

    void inputLine(istream &ins)
    {
        ins.getline(value, maxLength + 1);
    }
    friend ostream &operator<<(ostream &outs, StringVar theString);
    void operator=(const StringVar &rightside); // =overload

    ~StringVar(); // Destructor

private:
    char *value;
    int maxLength;
};

StringVar::StringVar()
{
    maxLength = 100;
    value = new char[maxLength + 1]; // +1 for empty room for null char '\0'
}
StringVar::StringVar(int size)
{
    maxLength = size;
    value = new char[maxLength + 1]; // +1 for empty room for null char '\0'
}
StringVar::StringVar(const char a[])
{
    maxLength = strlen(a);
    value = new char[maxLength + 1]; // +1 for empty room for null char '\0'
    strcpy(value, a);
}
StringVar::StringVar(const StringVar &stringObject)
{
    maxLength = stringObject.length();
    value = new char[maxLength + 1];
    strcpy(value, stringObject.value);
}

StringVar::~StringVar()
{
    delete[] value;
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
}
ostream &operator<<(ostream &outs, StringVar theString)
{
    outs << theString.value;
    return outs;
}



int main()
{
    StringVar string1("Ben Berkay");
    StringVar string2(string1);
    StringVar string3("Merhaba benim ismim Ergin");

    cout << string1 << endl;
    cout << string2 << endl;
    cout << string3 << endl;

    cout << "Please change S1 :";
    string1.inputLine(cin);
    string3 = string1;
    cout << "******************" << endl;

    cout << string1 << endl;
    cout << string2 << endl;
    cout << string3 << endl;

    return 0;
}

int StringVar::length() const
{
    return strlen(value);
}