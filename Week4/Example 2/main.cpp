/*  Example 2 
    Example 1 with using stremas as arguments to functions
*/

// A stream can be the argument to a function.
// The only restriction is that any input or output must be passed to a function must be passed as call-by-reference.

#include <iostream> // cout and cin
#include <fstream>  // file stream lib.
#include <cstdlib>  // c standart lib.
#include <cmath>

using namespace std;

void get_stream(ifstream &input, ofstream &output);

// Fixed name
int main()
{
    int x, count = 0;
    float sum = 0;
    float avg;

    ifstream in_s;
    ofstream out_s;

    get_stream(in_s, out_s);

    cout << "\t  x \t\t x^2 \t\t Current Sum \n";
    cout << "\t === \t\t === \t\t ========== \n";

    while (in_s >> x) // Step (4)-Read all numbers one-by-one to the end of the file
    {
        sum = sum + x;
        cout << "\t  " << x << "\t\t  " << pow(x, 2) << "\t\t  " << sum << "\n";
        count++;
    }

    avg = sum / count;
    cout << "\n \t\t The average of these " << count << " numbers is: " << avg << endl;

    in_s.close(); // Step (5)-Close the connection (close the file)

    return 0;
}

void get_stream(ifstream &input, ofstream &output)
{
    // Input File
    char input_file[15];
    cout << "Please input the input file name" << endl;
    cin >> input_file;

    input.open(input_file);

    if (input.fail())
    {
        cout << "Input file opening failed" << endl;
        exit(1);
    }

    // Output File
    char output_file[15];
    cout << "Please output the input file name" << endl;
    cin >> output_file;

    output.open(output_file);

    if (output.fail())
    {
        cout << "Input file opening failed" << endl;
        exit(1);
    }
}