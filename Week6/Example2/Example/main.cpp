
/* Example 2*/

// Lets create a program that stores a selected number of StudentName and StudentID by user. Display the student list after user finish
// adding names

// 1) Ask user number of students
// 2) Create a dynamical string array
// 3) Use for loop to fill array elements by using user inputs.
// 4) Print Result
// 5) Delete dynamical array.

#include <iostream>
using namespace std;
#include <string>

int main(void)
{
    cout << "Please enter number of students : ";
    int num_of_students;
    cin >> num_of_students;
    cin.ignore(); // Important to use getline after usage of cin

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