#include <iostream>

using namespace std;

// How to declare a class (1)
/* class ClassName
{
public :
    DataType variableName;
    ....
    DataType functionName;
private :
    DataType variableName;
    ....
    DataType functionName;
}
*/

// if we dont use public keyword it automatically set to private
/*class Person
{
public:
    int salary;
    int age;
    int yearsWorked;
    void PrintPerson();
    // We can both declare and define right here!!
};
*/

// Why do we need to use private Step(5)
class Person
{
public:
    // Constructor (7) : it is a special kind of member function and it is executed when class is declared
    // Rules 1) Must be exactly the same name of Class Name
    //       2) no return type (even void is not allowable!!)

    Person(int p_ID, int p_sal, int p_age, int p_year); // Contructor
    Person();                                           // Constructor overloading
    void PrintPerson();
    void setData(int p_ID, int p_sal, int p_age, int p_year); // We have to use member function to reach private variables Step(5)

    // Function overloading Step(6)
    void setData(int p_ID, int p_sal); // Same function but use different number of arguments

private:
    int ID;
    int salary;
    int age;
    int yearsWorked;
    void checkData()
    {
        if (ID < 0 || salary < 0 || age < 0 || yearsWorked < 0)
        {
            cout << "Invalid Data";
            exit(1);
        }
    }
};

int main()
{
    // How to declare object Step(3)
    /*Person Berkay; // Person -> class name Berkay -> object name
    Person Mert;
*/
    Person Berkay{1, 500, 25, 2};
    Person Mert;
    // Person Mert(); // ILLEGAL
    /*
        // How to access data and function inside object Step(4)
        Berkay.salary = 100;
        Berkay.age = 26;
        Berkay.yearsWorked = 2;
    */
    // Berkay.setData(1, 400, 25, 2);
    Berkay.PrintPerson();

    Mert.setData(2, 500);
    Mert.PrintPerson();

    return 0;
}

// How to define member function of class Step(2)
// TypeName ClassName :: MemberFunction definition
void Person::PrintPerson()
{
    cout << "*********Printing Class Content***********" << endl;
    cout << "ID of Person : " << ID << endl;
    cout << "Salary of Person : " << salary << endl;
    cout << "Age of Person : " << age << endl;
    cout << "Years Worked of Person : " << yearsWorked << endl;
}

void Person::setData(int p_ID, int p_sal, int p_age, int p_year)
{
    ID = p_ID;
    salary = p_sal;
    age = p_age;
    yearsWorked = p_year;
    checkData();
    // Lets add some rule for initializing variables of objects
}

void Person::setData(int p_ID, int p_sal)
{
    ID = p_ID;
    salary = p_sal;
    age = 0;
    yearsWorked = 0;
    checkData();
    // Lets add some rule for initializing variables of objects
}

// Constructor
/*Person::Person(int p_ID, int p_sal, int p_age, int p_year)
{
    ID = p_ID;
    salary = p_sal;
    age = p_age;
    yearsWorked = p_year;
    checkData();
}
*/
// Constructor Initialization
Person::Person(int p_ID, int p_sal, int p_age, int p_year) : ID(p_ID), salary(p_sal), age(p_age), yearsWorked(p_year)
{
    checkData();
}

// Constructor
Person::Person()
{
    ID = 0;
    salary = 0;
    age = 0;
    yearsWorked = 0;
}