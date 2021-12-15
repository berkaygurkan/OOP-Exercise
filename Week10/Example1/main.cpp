/*Example 1 Inheritance*/

/* Step(1) What is inheritance
Inheritance is a process of creating new class(derived/child class) from another class(base/parent).
Derived class automatically has all member variable and functions of base class.
It is possible to add new variables and functions in derived class.
Inheritance provides a way to organize code without duplication.
*/

/* Step(2) How to create a derived class
 class DerivedClassName : public BaseClassName
{
public:
....
private:
....
}
*/

/* Step(3) We may have a same member function name in both child and parent class
    - If arguments are the same but definitions are different - Redefining
    - If arguments are not same - Overloading
    Both of them are available to use but we need to be sure where to use!
    - We can still access base definition by using scope resolution operator (::)
*/

/* Step(4) Constructors are not inherited to child class and we have to define new constructor for child class.
- We can (and we should) invoke parent class constructor within initializiation section of cosntructor
  ClassName :: ConstructorName(args....) : ....     The portion after (:) is called initialization section of constructor
*/

/* Step(5) Derived classes still cant reach private variables of base class by using their own public member
functions(child class member functions). Easy way to reach is use member functions of base class. Other option will be
explained in next section
*/

/*
Lets calculate total payment for employees by using Class using inheritance mechanism.
1) Create a base class Employee with name, SSN and net payment information.
2) Create a Hourly Working Employee by creating new class from base class. (Payment = hoursworked * wage)
3) Create a Salaried Employee by creating new class from base class.
4) Include all necessary mutator and accessor functions and keep member variables private.
5) Print total payment amount with a employee information.
*/

#include <iostream>
#include <string>
using namespace std;

// Base Class
class Employee
{
public:
    Employee();
    Employee(string newName, string newSSN);
    string getName();
    string getSSN();
    void setNetPay(double newNetPay);
    double getNetPay();
    void changeName(string newName);
    void changeSSN(string newSSN);
    void printCheck();             // Reciept
    void giveRaise(double amount); // Step(2)

private:
    string name;
    string SSN;
    double netPay;
};
// Default Constructor
Employee ::Employee()
{
    cout << "Enter employee name :";
    getline(cin, name);
    cout << "Enter employee social security number : ";
    cin.ignore(); // We've used cin with getline function. In order to use >> operator later we must add this line.
    cin >> SSN;
}
// Constructor with name information
Employee ::Employee(string newString, string newSSN)
{
    name = newString;
    SSN = newSSN;
}
// Returns private member variable name
string Employee::getName()
{
    return name;
}
// Returns private member variable SSN
string Employee ::getSSN()
{
    return SSN;
}
// Sets net payment of employee
void Employee::setNetPay(double newNetPay)
{
    netPay = newNetPay;
}
// Get private member netPay
double Employee::getNetPay()
{
    return netPay;
}
// Changes name of employee
void Employee::changeName(string newName)
{
    name = newName;
}
// Changes SSN number of employee
void Employee::changeSSN(string newSSN)
{
    SSN = newSSN;
}
// Print payment details of employee
void Employee::printCheck()
{
    cout << "\n ERROR on printCheck function. This function is called from undifferentiated employee" << endl;
    exit(1);
}
// Print raise details of employee
void Employee::giveRaise(double amount)
{
    cout << "\n ERROR on giveRaise function. This function is called from undifferentiated employee" << endl;
    exit(1);
}

// Derived Class - Hourly Employee
class HourlyEmployee : public Employee
{
public:
    HourlyEmployee();
    HourlyEmployee(string newName, string newSSN, double newWageRate, double newHours);
    void setRate(double newWageRate);
    void setHours(double newHours);
    double getRate();
    double getHours();
    void printCheck();             // Redefiniton not overloading
    void giveRaise(double amount); // Redefinition not overloading (Step2)

private:
    double wageRate;
    double hours;
};
// Empty Constructor
HourlyEmployee::HourlyEmployee() : Employee() // Calling base constructor is only valid here
{
    cout << "Enter HourlyEmployee wage rate :";
    cin >> wageRate;
    cout << "Enter HourlyEmployee hours worked :";
    cin >> hours;
}
// Constructor with wage and hour information
HourlyEmployee::HourlyEmployee(string newName, string newSSN, double newWageRate, double newHours) : Employee(newName, newSSN),
                                                                                                     wageRate(newWageRate), hours(newHours)
{
    // Left blank intentioanally
}
// Changes rate of employeee
void HourlyEmployee::setRate(double newWageRate)
{
    wageRate = newWageRate;
}
// Changes worked hour of employee
void HourlyEmployee ::setHours(double newHours)
{
    hours = newHours;
}
// Returns private member wageRate
double HourlyEmployee::getRate()
{
    return wageRate;
}
// Returns private member hours
double HourlyEmployee::getHours()
{
    return hours;
}
// Returns payment details for employee
void HourlyEmployee::printCheck() // Redefinition of base class member function printCheck
{
    setNetPay(wageRate * hours);

    cout << "__________________________________________" << endl;
    cout << "Pay to the order of " << getName() << endl;
    cout << "The sum of    " << getNetPay() << " dollars" << endl;
    cout << "__________________________________________" << endl;
    cout << "Person Information........" << endl;
    cout << "Name : " << getName() << endl;
    cout << "SSN  : " << getSSN() << endl;
    cout << "Type : Hourly Working Employee" << endl;
    cout << "Hours worked :" << getHours() << endl;
    cout << "Hours Rate :" << getRate() << endl;
    cout << "Net Payment :" << getNetPay() << endl;
}

// Add WageRate %amount
void HourlyEmployee::giveRaise(double amount)
{
    wageRate = wageRate * (amount / 100) + wageRate;
}

// Derived Class - Salaried Employee
class SalariedEmployee : public Employee
{
public:
    SalariedEmployee();
    SalariedEmployee(string newName, string newSSN, double newWeeklySalary);
    void setSalary(double newWeeklySalary);
    double getSalary();
    void printCheck();
    void giveRaise(double amount);

private:
    double salary;
};
// Empty Constructor
SalariedEmployee::SalariedEmployee() : Employee()
{
    cout << "Enter Salaried Employee's weekly salary : ";
    cin >> salary;
}
// Constructor with name SSN and weeklySalary information
SalariedEmployee::SalariedEmployee(string newName, string newSSN, double newWeeklySalary) : Employee(newName, newSSN), salary(newWeeklySalary)
{
    //
}
// Sets weekly salary
void SalariedEmployee::setSalary(double newWeeklySalary)
{
    salary = newWeeklySalary;
}
// Get private member weekly salary
double SalariedEmployee::getSalary()
{
    return salary;
}
// Print payment information for employee
void SalariedEmployee::printCheck()
{
    setNetPay(salary);

    cout << "__________________________________________" << endl;
    cout << "Pay to the order of " << getName() << endl;
    cout << "The sum of    " << getNetPay() << " dollars" << endl;
    cout << "__________________________________________" << endl;
    cout << "Person Information........" << endl;
    cout << "Name : " << getName() << endl;
    cout << "SSN  : " << getSSN() << endl;
    cout << "Type : Salaired Working Employee" << endl;
    cout << "Net Payment :" << getNetPay() << endl;
}

void SalariedEmployee::giveRaise(double amount)
{
    salary = salary + salary * (amount / 100);
}

int main()
{

    HourlyEmployee Berkay("Berkay Gürkan", "12-433-211", 100, 50);
    cout << "Before raise" << endl;
    Berkay.printCheck();
    // Berkay.giveRaise(10);                            // Step (2)
    cout << "After raise" << endl;
    Berkay.printCheck();

    SalariedEmployee Mert;
    cout << "Before raise" << endl;
    Mert.printCheck();
    Mert.giveRaise(6); // Step (2)
    cout << "After raise" << endl;
    Mert.printCheck();

    return 0;
}