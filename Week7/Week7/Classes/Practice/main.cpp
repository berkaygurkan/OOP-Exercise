#include <iostream>
#include <cmath>
using namespace std;

// How to declare class
/*class Person
{
public:            // Other functions can access the variables and functions below public definition
    void output(); // One of the biggest difference between structures and classes
    int salary;
    int age;
    int yearsWorked;

private: // private variables and functions can be only accessed by public member functions.
    int ID;
};*/

class Person
{
public: // Other functions can access the variables and functions below public definition
    Person(int Person_ID, int Person_Salary, int Person_Age, int Person_years);
    Person();
    void output(); // One of the biggest difference between structures and classes
    // Accessor Functions
    int getID();
    int getSalary();

    // Mutator Functions
    void setPerson();
    // Function Overloading
    void setPerson(int Person_ID);
    void setPerson(int Person_ID, int Person_Salary);

private: // private variables and functions can be only accessed by public member functions.
    int ID;
    int salary;
    int age;
    int yearsWorked;
    void checkInput();
};

int main()
{
    // How to create object using class
    Person Berkay(123, 500, 25, 2);
    Person Mert;

    // We can access and manipulate variables inside class by using dot operator.
    /*Berkay.salary = 100;
    Berkay.age = 26;
    Berkay.yearsWorked = 2;
*/

    // Berkay.setPerson();
    // Berkay.setPerson(123, 500);
    // We can use member functions associated with object by using dot operator too.
    Berkay.output();
    Mert.output();

    // cout << "Berkay's ID is " << Berkay.getID();

    return 0;
}

// We use Scope Resolution Operator (::) for member function definition
void Person ::output()
{
    cout << "Person's informations is as follows :" << endl;
    cout << "ID :" << ID << endl;
    cout << "Salary :" << salary << endl;
    cout << "Age :" << age << endl;
    cout << "Number of years worked in this company :" << yearsWorked << endl;
}

int Person ::getID()
{
    return ID;
}
int Person ::getSalary()
{
    return salary;
}
void Person::setPerson()
{
    cout << "Please enter Person ID : ";
    cin >> ID;
    cout << endl;

    cout << "Please enter Persons salary : ";
    cin >> salary;
    cout << endl;

    cout << "Please enter Persons age : ";
    cin >> age;
    cout << endl;

    cout << "Please enter Persons working year : ";
    cin >> yearsWorked;
    cout << endl;
    checkInput();
}
void Person::setPerson(int Person_ID, int Person_Salary)
{
    salary = Person_Salary;
    ID = Person_ID;
    checkInput();
}
void Person::setPerson(int Person_ID)
{
    ID = Person_ID;
    checkInput();
}
void Person::checkInput()
{
    if (ID < 0 || salary < 0 || (age < 18 || age > 65) || yearsWorked < 0)
    {
        output();
        cout << "Invalid Data" << endl;
        exit(1);
    }
}

// Constructor
// Constructor is a special kind of member function that is automatically called when obhect of that class
// is declared
/*
Rules
1 - Constructor must have same name as class
2 - It cannot return value (even void!!!)
*/

// Constructor
Person::Person(int Person_ID, int Person_Salary, int Person_Age, int Person_years)
{
    ID = Person_ID;
    salary = Person_Salary;
    age = Person_Age;
    yearsWorked = Person_years;
    checkInput();
}

/*
Person::Person()
{
    ID = 0;
    salary = 0;
    age = 18;
    yearsWorked = 0;
}
*/
Person::Person() : ID(0), salary(0), age(18), yearsWorked(2)
{
}