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
    void printCheck();
    void giveRaise(double amount);

private:
    string name;
    string SSN;

protected:
    double netPay;
};
// Default Constructor
Employee ::Employee()
{
    cout << "Enter employee name :";
    getline(cin, name);
    cout << "Enter employee social security number : ";
    cin.ignore(); // We've used cin with getline function. In order to use >> operator we must add this line.
    cin >> SSN;

    // cout << endl;
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
    void giveRaise(double amount); // Redefinition not overloading

private:
    double wageRate;
    double hours;
};
// Empty Constructor
HourlyEmployee::HourlyEmployee() : Employee() // Calling base constructor is only valid here
{
    cout << "Enter HourlyEmployee wage rate :" << endl;
    cin >> wageRate;
    cout << "Enter HourlyEmployee hours workd :" << endl;
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
    // setNetPay(wageRate * hours);
    netPay = wageRate * hours;

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
    // setNetPay(salary);
    netPay = salary;
    cout << "__________________________________________" << endl;
    cout << "Pay to the order of " << getName() << endl;
    // cout << "The sum of    " << getNetPay() << " dollars" << endl;
    cout << "The sum of    " << netPay << " dollars" << endl;
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
    Berkay.giveRaise(10);
    cout << "After raise" << endl;
    Berkay.printCheck();

    SalariedEmployee Mert("Mert Gürkan", "1231-f34", 100);
    /*
    cout << "Before raise" << endl;
    Mert.printCheck();
    Mert.giveRaise(6);
    cout << "After raise" << endl;
    Mert.printCheck();
*/

    // If want to reach redefined base function we have to use :: operator
    Mert.Employee::printCheck();

    /*Employee Ergin("Ergin Gürkan", "84jr18");
    Ergin.printCheck();*/

    return 0;
}