// Objectives of this lab
// 1) Learn to read from or write to a file
// 2) Learn how to read everything from a file
// 3) Learn predefined character functions

/* Example 1 */
// In this example we will learn to read/write to a file which will remain on hard disk untill we manually remove it.

// Stream is a flow of characters (or other kind of data) which gives information "<<" ">>"
// Object is a special kind of variable that has its own special purpose function attached to the variable
// Class is a data type whose variables ara objects - ifstream and ofstream -

// Read/Write operation steps
/*
Step (1) : Include required directives or lib.
Step (2) : Create the input or output streams (objects)
Step (3) : Connect the input stream to input file / output stream to output file.
Step (4) : Use the stream to read or write operations
Step (5) : Close input and output files corresponding streams

*/

// Step 1
#include <iostream> // cin and cout
#include <fstream>  // File Stream Lib. -ifstream and ofstream-
#include <cstdlib>  // To use exit(1)
#include <cmath>    // Math library

using namespace std;

int main()
{
    int myNumRead = 0; // Store readed integer
    int count = 0;     // Counter for numbers
    float sum = 0;     // Summation of all numbers in input file
    float avg = 0;     // Average of all numbers in input file

    // Step 2
    ifstream in_s;
    ofstream out_s;

    // Step 3
    in_s.open("input.txt");
    out_s.open("output.txt");

    if (in_s.fail())
    {
        cout << "Error opening file" << endl;
        exit(1); // Exit 1 and 0 both exits. Exit 1 refers to exit with with an predicted error.
    }

    cout << "\t  x \t\t x^2 \t\t Current Sum " << endl;
    cout << "\t ===\t\t === \t\t ========" << endl;
    out_s << "\t  x \t\t x^2 \t\t Current Sum " << endl;
    out_s << "\t ===\t\t === \t\t ========" << endl;

    while (in_s >> myNumRead) // This omits the blanks and newline characters
    {
        sum = sum + myNumRead;
        cout << "\t  " << myNumRead << "\t \t  " << pow(myNumRead, 2) << "\t \t " << sum << endl;
        out_s << "\t  " << myNumRead << "\t \t  " << pow(myNumRead, 2) << "\t \t " << sum << endl;
        count++;
    }

    avg = sum / count;
    cout << "\n The average of these " << count << " numbers is " << avg << endl;
    out_s << "\n The average of these " << count << " numbers is " << avg << endl;

    // Step 5 - Close files
    in_s.close();
    out_s.close();

    return 0;
}
