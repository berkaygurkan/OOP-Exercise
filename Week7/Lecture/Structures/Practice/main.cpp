// Structures and Classes

#include <iostream>
#include <string>
using namespace std;

// Structure : is data type that allows to combine different data type variables. (C/C++)
// Class : A data type whose variables are objects. (C++)
// Object : Special kind of variable that has its own special purpose functions (member functions)

/*Structs*/
// Why do we need struct ? Step(1)
// Structs are both available in C/C++ to have a collection values of different types in one single term

// How do we declare struct?  Step(2)
// Mostly decalered in global (not inside any function)

struct Date
{
    int day;
    int month;
    int year;
};

struct Automobile // Automobile  is Structure tag
{
    int year;          // Structure member
    int doors;         // Structure member
    double horsePower; // Structure member
    string modelName;
    Date orderDate;
};

// How to declare struct variable Step(3)
// Structure_Tag VariableName
Automobile myCar;
Automobile yourCar;

struct Truck // Automobile  is Structure tag
{
    int year;          // Structure member
    int doors;         // Structure member
    double horsePower; // Structure member
    string modelName;
};

void Print(Automobile tempCar);
Automobile setData(int yr, int door_num, double hp, string name);

Truck myTruck;

int main()
{
    // How to access and manipulate variables inside structure variable. Step(4)
    myCar.year = 2021;
    myCar.doors = 5;
    myCar.horsePower = 130;
    myCar.modelName = "C5 Aircross";
    // Step (8)
    myCar.orderDate.day = 2;
    myCar.orderDate.day = 12;
    myCar.orderDate.day = 2021;

    cout << "Model Name of myCar :" << myCar.modelName << endl;

    // We may have a same member name within different structures Step(5)
    myTruck.modelName = "Ford F-150";

    // It is possible to assign one struct variable to another struct variable if those are belong to same structure tag Step(6)
    yourCar = myCar;
    cout << "Model Name of yourCar :" << yourCar.modelName << endl;

    // Structure variables can be function argument  Step(7)
    Print(myCar);

    // Sturucture variables can be return value of any function Step(8)
    yourCar = setData(2020, 5, 200, "Tesla Model X");
    Print(yourCar);

    // We can use struct inside sturct

    return 0;
}

void Print(Automobile tempCar)
{
    cout << "****Printing Structure Variables********" << endl;
    cout << "Year of myCar :" << tempCar.year << endl;
    cout << "Door Number of myCar :" << tempCar.doors << endl;
    cout << "Horse Power of myCar :" << tempCar.horsePower << endl;
    cout << "Model Name of myCar :" << tempCar.modelName << endl;
}

Automobile setData(int yr, int door_num, double hp, string name)
{
    Automobile tempStructVar;

    tempStructVar.year = yr;
    tempStructVar.doors = door_num;
    tempStructVar.horsePower = hp;
    tempStructVar.modelName = name;

    return tempStructVar;
}