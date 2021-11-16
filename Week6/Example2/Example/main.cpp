/*
// P10_1.cpp - A program that uses an array of integers
#include <iostream>
using namespace std;
int main()
{
    int numlist[8];
    int i;

    // Read 8 integers from the keyboard
    for (i = 0; i < 8; i++)
    {
        cout << "Enter value #" << i + 1 << ": ";
        cin >> numlist[i];
    }
    // Display the numbers in a reverse order
    for (i = 8; i > 0; i--)
    {
        cout << "Value #" << i << ": ";
        cout << numlist[i - 1] << endl; //Pay attention to i-1!
    }

    return 0;
}
*/
/*
// P12_2.cpp - A program that uses an array of integers. Array elements accessed using pointer notation
#include <iostream>
using namespace std;
int main(void)
{
    int numlist[8];

    // Read 8 integers from the keyboard
    for (int i = 0; i < 8; i++)
    {
        cout << "Enter value #" << i + 1 << ": ";
        cin >> numlist[i];
    }
    // Display the numbers in a reverse order
    for (int i = 8; i > 0; i--)
    {
        cout << "Value #" << i << ": ";
        cout << *(numlist + (i - 1)) << endl; //Pay attention to i-1!
    }

    return 0;
}*/
/*
// P10_1b.cpp - A program that uses a flexible size array of integers
#include <iostream>
using namespace std;
const int SIZE = 8; // Set the maximum size for the array

int main(void)
{
    int numlist[SIZE];

    // Read SIZE integers from the keyboard
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter value #" << i + 1 << ": ";
        cin >> numlist[i];
    }
    // Display the numbers in a reverse order
    for (int i = SIZE; i > 0; i--)
    {
        cout << "Value #" << i << ": ";
        cout << numlist[i - 1] << endl; //Pay attention to i-1!
    }

    return 0;
}

*/
/*
//Note that SIZE was defined as a const int.Now lets modify this program and re - write it creating the array dynamically.

// P12_2a.cpp. Illustrates dynamic arrays
#include <iostream>
using namespace std;

int main(void)
{
    int SIZE;
    cout << "Enter the size of the array" << endl;
    cin >> SIZE;

    int *numlist = new int[SIZE];

    // Read SIZE integers from the keyboard
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter value #" << i + 1 << ": ";
        cin >> numlist[i];
    }
    // Display the numbers in a reverse order
    for (int i = SIZE; i > 0; i--)
    {
        cout << "Value #" << i << ": ";
        cout << numlist[i - 1] << endl; //Pay attention to i-1!
    }
    delete[] numlist;
    return 0;
}*/

// P12_2a.cpp. Illustrates dynamic arrays
#include <iostream>
using namespace std;
#include <string>

int main(void)
{
    cout << "Please enter number of students : ";
    int num_of_students;
    cin >> num_of_students;
    cin.ignore();

    string *Student_Name = new string[num_of_students];
    string *Student_ID = new string[num_of_students];

    for (int i = 0; i < num_of_students; i++)
    {
        cout << "Please enter Student Name : ";
        getline(cin, Student_Name[i]);
        cout << "Please enter Student Number : ";
        getline(cin, Student_ID[i]);
    }

    for (int i = 0; i < num_of_students; i++)
    {
        cout << i + 1 << ". student name : " << Student_Name[i] << "  " << i + 1 << ". student number : " << Student_ID[i] << endl;
    }

    // Delete
    delete[] Student_ID;
    delete[] Student_Name;

    return 0;
}