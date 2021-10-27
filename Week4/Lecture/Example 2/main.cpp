// Objectives of this lab
// 1) Learn to read from or write to a file
// 2) Learn how to read everything from a file
// 3) Learn predefined character functions

/* Example 2 */
// How to ask user to select or type input and output file names
// Same example nut using streams as arguments to function

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

void get_stream_name(ifstream &input, ofstream &output);

int main()
{
    int myNumRead = 0; // Store readed integer
    int count = 0;     // Counter for numbers
    float sum = 0;     // Summation of all numbers in input file
    float avg = 0;     // Average of all numbers in input file

    // Step 2
    ifstream in_s;
    ofstream out_s;
    /*
    char inp_file_name[15];
    char out_file_name[15];

    // Take this code snippet into function
    cout << "Please enter your input file name : ";
    cin >> inp_file_name;

    cout << "\n Please enter your output file name : ";
    cin >> out_file_name;

    // Step 3
    in_s.open(inp_file_name);
    out_s.open(out_file_name);
*/
    get_stream_name(in_s, out_s);

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

void get_stream_name(ifstream &input, ofstream &output)
{
    char inp_file_name[15];
    char out_file_name[15];

    // Take this code snippet into function
    cout << "Please enter your input file name : ";
    cin >> inp_file_name;

    cout << "\n Please enter your output file name : ";
    cin >> out_file_name;

    // Step 3
    input.open(inp_file_name);
    output.open(out_file_name);
}