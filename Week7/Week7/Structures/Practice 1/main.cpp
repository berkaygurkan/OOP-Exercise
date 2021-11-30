/*Structes and Classes*/
#include <iostream>
using namespace std;

// Structure : is data type  allows to combine data items of different kinds.
// Class : A data type whose variables are objects.
// Object : Special kind of variable that has its own special purpose functions attached to the variable.

// Why do we use structs ? Structs are both available in C and C++ in order to have a collection values of different types
// in one single term

// How to declare structure ?
// Mostly declared in global

struct Date
{
    int month;
    int day;
    int year;
};

struct StudentRecord // StudentRecord is a structure tag
{
    int IDNumber; // studentNumber and grade are member names
    char grade;
    Date registrationDate;
};

// We can use same member name for different structs
struct TeacherRecord
{
    int IDNumber;
    int workingYears;
};

// How to define structure ?
StudentRecord Berkay, Ergin;
TeacherRecord Mert;

// We can use structures as function arguments

void Print(StudentRecord temp)
{
    cout << "ID Number is " << temp.IDNumber << endl;
    cout << "Grade is " << temp.grade << endl;
}

StudentRecord setData(int ID, char grade)
{
    StudentRecord tempStruct;
    tempStruct.IDNumber = ID;
    tempStruct.grade = grade;
    return tempStruct;
}

int main()
{
    // How to access data inside structure.
    Berkay.IDNumber = 123123;
    Berkay.grade = 'B';
    Mert.IDNumber = 123123;
    Mert.workingYears = 5;

    cout << "Berkay's ID Number is " << Berkay.IDNumber << endl;

    // Can we assign one struct to another struct
    // If those are initialized with same structure definition it is possible;
    Ergin = Berkay;
    cout << "Ergin's ID Number is " << Ergin.IDNumber << endl;

    // Function with struct arguments and return values
    Print(Ergin);

    Ergin = setData(321321, 'C');
    Print(Ergin);
    Ergin.registrationDate.day = 1;

    // We can alternatively initialize struct in one line

    TeacherRecord Obut{1232, 2};
    cout << "Dr Obuts's ID Number is " << Obut.IDNumber << endl;
    return 0;
}