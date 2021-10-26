/*  Example 2 

    Example 1 with using stremas as arguments to functions

    // EOF - This function returns true when the end of the input file is reached.

*/

#include <iostream> // cout and cin
#include <fstream>  // file stream lib.
#include <cstdlib>  // c standart lib.
#include <cmath>

using namespace std;

void get_input_stream(ifstream &input);

// Fixed name
int main()
{
    char c;
    ifstream in_s; // Step (2)-B - declaration of the stream of type input

    get_input_stream(in_s);
    cout << endl;
    cout << "Here are the entire contents of the input file \n";

    /*
    while (in_s >> c) // Step (4)-Read all numbers one-by-one to the end of the file.
    {
        cout << c;
    }
 */
    /* while (in_s.get(c)) // Step (4)-Read all numbers one-by-one to the end of the file.
    {
        cout.put(c);
    }*/

    while (!in_s.eof())
    {
        in_s.get(c);
        cout << c;
    }

    cout << endl;
    cout << "\n I am done with writing the contents of the file \n";

    in_s.close(); // Step (5)-Close the connection (close the file)

    return 0;
}

void get_input_stream(ifstream &input)
{
    char input_file[15];
    cout << "Please input the input file name" << endl;
    cin >> input_file;

    input.open(input_file);

    if (input.fail())
    {
        cout << "Input file opening failed" << endl;
        exit(1);
    }
}