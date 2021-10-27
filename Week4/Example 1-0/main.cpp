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
    int myNumRead = 0;

    // Step (2)
    ifstream in_s; //Decleration of stream of type input
    ofstream out_s;

    // Step(3)

    in_s.open("input.txt");
    out_s.open("output.txt");

    /*//v3
    char InputName[15], OutputName[15];

    cout << "Please enter input file name : ";
    cin >> InputName;
    cout << endl;
    cout << "Please enter output file name : ";
    cin >> OutputName;

    in_s.open(InputName);
    out_s.open(OutputName);
*/
    /* ///v2
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
*/
    // To Screen
    cout << "Hello! This message is printed on screen" << endl;

    // Step(4)
    // To Output File
    out_s << "Hello! This message is printed on file" << endl;

    // Step(4)
    while (in_s >> myNumRead)
    {
        cout << "I am reading numbers from file " << myNumRead << endl;
        out_s << "I am reading numbers from file " << myNumRead << endl;
    }

    // To Scree
    cout << "Hello! This is the end of program" << endl;

    // Step(4)
    // To Output File
    out_s << "Hello! This is the end of program" << endl;

    // Step (5)-Close the connection (close the file)
    in_s.close();
    out_s.close();

    return 0;
}