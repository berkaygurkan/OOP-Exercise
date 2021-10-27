/* Example 1 */
//  In this example, we will learn to read from/write to a file which will remain on the hard disk until we manually remove them.

// Stream : is a flow of characters (or other kind of data).
// Object : Special kind of variable that has its own special purpose functions attached to the variable
// Class : A data type whose variables are objects - ifstream and ofstream

// Write and Read Data Operation Steps
// Step (1): Include the required directives
// Step (2): Create the input/output streams
// Step (3): Connect the input stream to an input file/the output stream to an output file
// Step (4): Use the input stream to read from the input file/the output stream to write the output file
// Step (5): Close the input and output files by disconnecting the corresponding streams.

// Step (1)
#include <iostream> // cout and cin
#include <fstream>  // file stream lib.
#include <cstdlib>  // c standart lib.
#include <cmath>    // math lib.

using namespace std;

// Fixed name
int main()
{
    int myNumRead = 0; // Store readed integer
    int count = 0;     // Counter
    float sum = 0;     // Summation of all integers
    float avg;         // Average of numbers

    char input_file[15]; // Input File Name
    char out_file[15];   // Output File Name

    // Step (2)
    ifstream in_s;  //Decleration of stream of type input
    ofstream out_s; //Decleration of stream of type output

    cout << "Please input the input file name" << endl;
    cin >> input_file;

    cout << "Please out the input file name" << endl;
    cin >> out_file;

    // Step(3)
    in_s.open(input_file);
    out_s.open(out_file);

    if (in_s.fail())
    {
        cout << "Input file opening failed" << endl;
        exit(1);
    }

    if (out_s.fail())
    {
        cout << "Output file opening failed" << endl;
        exit(1);
    }

    cout << "\t  x \t\t x^2 \t\t Current Sum \n";
    cout << "\t === \t\t === \t\t ========== \n";
    // Step(4)
    out_s << "\t  x \t\t x^2 \t\t Current Sum \n";
    out_s << "\t === \t\t === \t\t ========== \n";

    // Step(4)
    while (in_s >> myNumRead)
    {
        sum = sum + myNumRead;
        cout << "\t  " << myNumRead << "\t\t  " << pow(myNumRead, 2) << "\t\t  " << sum << "\n";
        out_s << "\t  " << myNumRead << "\t\t  " << pow(myNumRead, 2) << "\t\t  " << sum << "\n";
        count++;
    }

    avg = sum / count;
    cout << "\n \t\t The average of these " << count << " numbers is: " << avg << endl;
    out_s << "\n \t\t The average of these " << count << " numbers is: " << avg << endl;

    // Step (5)-Close the connection (close the file)
    in_s.close();
    out_s.close();

    return 0;
}