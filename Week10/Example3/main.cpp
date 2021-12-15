/* Functions that are not inherited */

/*In general, these functions are NOT inherited:
1) constructors (including copy constructors)
2) private members (variables and functions)
3) destructors
4) the assignment operator =
5) overloaded assignment operators and constructors*/

/*
    If we use specially dynamic arrays, pointers or dynamic variables it is important
    to redefine all of them in child class.
*/

/*
Lets create an dynamic array by using class sturucture
1) Class should create dynamic array by using pointer
2) Create a initialization mechanism for array.
3) Don't allow overloading for array.
4) Create constructor, destructor, copy constructor and assignment operator to test.
Create and fill first array, use first array to create new arrays by using copy constructor and assignment.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

class PartFilledArray
{
public:
    PartFilledArray(int array_size);
    PartFilledArray(const PartFilledArray &object);
    ~PartFilledArray();
    void operator=(const PartFilledArray &right_side);
    void add_value(double new_entry);
    void printArray();

protected:
    double *a;
    int max_number;
    int number_used;
};

void PartFilledArray::printArray()
{
    for (int i = 0; i < max_number; i++)
    {
        cout << a[i] << endl;
    }
}

void PartFilledArray::add_value(double new_entry)
{
    if (number_used < max_number)
    {
        a[number_used] = new_entry;
        number_used++;
    }
    else
    {
        cout << "WARNING! Array overloaded" << endl;
        exit(1);
    }
}

PartFilledArray::PartFilledArray(int array_size) : max_number(array_size), number_used(0)
{
    a = new double[max_number];

    for (int i = 0; i < max_number; i++)
    {
        a[i] = 0;
    }
}

PartFilledArray::~PartFilledArray()
{
    delete[] a;
    cout << "Memory is released" << endl;
}

PartFilledArray::PartFilledArray(const PartFilledArray &object) : max_number(object.max_number), number_used(0)
{
    a = new double[max_number];

    for (int i = 0; i < max_number; i++)
    {
        a[i] = object.a[i];
    }
}

void PartFilledArray::operator=(const PartFilledArray &right_side)
{
    int new_length = right_side.max_number;

    if (new_length > max_number)
    {
        max_number = new_length;
        number_used = 0;
        delete[] a;
        a = new double[max_number];

        for (int i = 0; i < max_number; i++)
        {
            a[i] = right_side.a[i];
        }
    }
    else
        for (int i = 0; i < new_length; i++)
        {
            a[i] = right_side.a[i];
        }
}

int main()
{

    PartFilledArray firstArray(5);
    firstArray.add_value(10);
    firstArray.add_value(11);
    firstArray.add_value(12);
    firstArray.add_value(13);

    cout << "____First Array______" << endl;
    firstArray.printArray();
    PartFilledArray secondArray(firstArray); // Calls copy constructor
    PartFilledArray thirdArray = firstArray; // Calls copy cosntructor
    PartFilledArray fourthArray(8);
    fourthArray = firstArray;
    cout << "____Second Array______" << endl;
    firstArray.add_value(14);
    secondArray.printArray();
    cout << "____Third Array______" << endl;
    thirdArray.printArray();
    cout << "____Fourth Array______" << endl;
    fourthArray.printArray();

    /*
    PartFilledArray fourthArray(3);
    fourthArray = firstArray;
    fourthArray.printArray();
    */
    return 0;
}