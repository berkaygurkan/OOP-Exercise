// Objectives of this lab
// 1) Learn to read from or write to a file
// 2) Learn how to read everything from a file
// 3) Learn predefined character functions

/* Example 3 */
// Different input read techniques ( rather than <<) to read text file.
// get member function : allows program to read in one character of input and store in variable char
// put member function : this is analogous to get but it is used for output rather that input.
// eof member function : (end of file) determines if there is no more input left. Boolean return value 1: end of file 0: not end of file

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
    char c;
    string myString;
    // Step 2
    ifstream in_s;
    ofstream out_s;

    get_stream_name(in_s, out_s);

    if (in_s.fail())
    {
        cout << "Error opening file" << endl;
        exit(1); // Exit 1 and 0 both exits. Exit 1 refers to exit with with an predicted error.
    }

    cout << "\n Program is about to start \n " << endl;
    /*
    while (in_s >> c)
    {
        //cout << c;
        cout.put(c);
    }
*/
    /*
    while (in_s.get(c))
    {
        //cout << c;
        cout.put(c);
    }
*/

    while (!in_s.eof())
    {
        in_s.get(c);
        cout << c;
    }

    cout << "\n\n Program is ended" << endl;

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