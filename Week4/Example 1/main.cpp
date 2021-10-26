#include <iostream> // cout and cin
#include <fstream>  // file stream lib.
#include <cstdlib>  // c standart lib.
#include <cmath>

using namespace std;

int test_count = 0;
// Fixed name
int main()
{
    int x, count = 0;
    float sum = 0;
    float avg;
    char input_file[15];
    char out_file[15];

    ifstream in_s; //Decleration of stream of type input
    ofstream out_s;

    cout << "Please input the input file name" << endl;
    cin >> input_file;

    cout << "Please out the input file name" << endl;
    cin >> out_file;

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
    out_s << "\t  x \t\t x^2 \t\t Current Sum \n";
    out_s << "\t === \t\t === \t\t ========== \n";

    while (in_s >> x)
    {
        sum = sum + x;
        cout << "\t  " << x << "\t\t  " << pow(x, 2) << "\t\t  " << sum << "\n";
        out_s << "\t  " << x << "\t\t  " << pow(x, 2) << "\t\t  " << sum << "\n";
        count++;
    }

    avg = sum / count;
    cout << "\n \t\t The average of these " << count << " numbers is: " << avg << endl;
    out_s << "\n \t\t The average of these " << count << " numbers is: " << avg << endl;

    in_s.close(); // Step (5)-Close the connection (close the file)
    out_s.close();

    return 0;

    return 0;
}