/*  Example 3 

    Different input read techniques to read text file.
    // get member function : allows progra mto read in one character of input and store in a variable type of char
    // put member function : this is analogous to get except that it is used for output rather than input.
    // eof (end of file) member function : determines if there is no more input left. Boolean return value -> 1: end of file 0:not end of file.

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

    //v1
    while (in_s >> c) // Step (4)-Read all numbers one-by-one to the end of the file.
    {
        cout << c;
    }

    /* //v2
    while (in_s.get(c)) // Step (4)-Read all numbers one-by-one to the end of the file.
    {
        //cout << c;
        cout.put(c);
    }
*/
    /*  //v3
    while (!in_s.eof())
    {
        in_s.get(c);
        cout << c;
    }
*/
    cout << endl;
    cout << "\n I am done with writing the contents of the file \n";

    in_s.close();

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