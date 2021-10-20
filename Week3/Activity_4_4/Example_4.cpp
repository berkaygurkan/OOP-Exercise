// Difference between call by value and call by reference

#include <iostream>
using namespace std;

void get_input(int &i, int &j);
void process(int &i, int j);

int main()
{
    int i, j;

    get_input(i, j);

    cout << "I am about to call function process, i = " << i << " j =" << j << endl;

    process(i, j);

    cout << "I just came back from function process, i = " << i << " j = " << j << endl;

    return 0;
}

void get_input(int &i, int &j)
{
    cout << "Please enter two values for i and j sepereated by a single space : ";
    cin >> i >> j;
    cout << endl;

    return;
}

void process(int &i, int j)
{
    i = i + 10;
    j = j + 20;
    cout << "Inside function proess" << endl;
    cout << "I added 10 to i, and 20 to j, i = " << i << " j = " << j << endl;
}
