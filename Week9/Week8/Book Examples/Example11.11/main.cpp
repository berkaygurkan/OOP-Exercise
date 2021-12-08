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

    int length() const;

    void inputLine(istream &ins);
    friend ostream &operator<<(ostream &outs, const StringVar &theString);

private:
    char *value;
    int maxLength;
};

void conversation(int maxNameSize);

int main()
{
    // conversation(30);
    // cout << "End of demo" << endl;

    StringVar line(20);
    // StringVar motto("Constructors can help.");
    cout << "Enter a string of length 20 or less:\n";
    line.inputLine(cin);
    StringVar temp(line); // Initialized by the copy constructor.
    StringVar shallow = line;

    cout << "Line :" << line << endl;
    cout << "Temp :" << temp << endl;
    cout << "Shallow:" << shallow << endl;

    cout << "Lets change Shallow and try one more time:" << endl;
    shallow.inputLine(cin);

    cout << "Line :" << line << endl;
    cout << "Temp :" << temp << endl;
    cout << "Shallow:" << shallow << endl;

    return 0;
}

void conversation(int maxNameSize)
{
    StringVar yourName(maxNameSize), ourName("Borg");
    cout << "What is your name ?" << endl;
    yourName.inputLine(cin);
    cout << "We are " << ourName << endl;
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