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
ConstructoName(const ClassName& theObject)
*/

/*
Overloading assignment operator (=)
When we use standart assignment operator without dynamical arrays it may not create problems.
1) overloaded assignemnt operator must be member func
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

class DynamicNum
{
public:
    DynamicNum();        // Constructor
    ~DynamicNum();       // Destruct
    DynamicNum(int num); // Constructor (Overloaded)
    DynamicNum(const DynamicNum &theObject)
    {
        value = new int;
        *value = *(theObject.value);
    }
    void operator=(const DynamicNum &theObject)
    {
        value = new int;
        *value = *(theObject.value);
    }

    void changeValue(int a)
    {
        *value = a;
    }

    void Display()
    {
        cout << "Value is :" << *value << endl;
    }

private:
    int *value;
};

int main()
{
    DynamicNum num1(5);
    DynamicNum num2(num1);  // Copy Constructor
    DynamicNum num3 = num1; // Copy Consturctor
    DynamicNum num4;        // =Operator
    num4 = num1;

    num1.Display();
    num2.Display();
    num3.Display();
    num4.Display();

    num1.changeValue(6);
    num1.Display();
    num2.Display();
    num3.Display();
    num4.Display();

    return 0;
}

DynamicNum::DynamicNum()
{
    value = new int;
    *value = 0;
}

DynamicNum::DynamicNum(int num)
{
    value = new int;
    *value = num;
}

DynamicNum::~DynamicNum()
{
    delete value;
    cout << "Value is deleted :)" << endl;
}