#include <iostream>
#include <vector>
using namespace std;

// How to initialize (1)
// vector<int> v;
// vector<int> v(3);
// using namespace

int main()
{
    // We can change allocated indexes like arrays
    vector<int> v(3);
    // We can use index which is created. Reach not indexed varialbe doesnt give error but result can be wrong! (2)
    // v[4] = 4; // problem

    v[0] = 1;
    v[1] = 2;
    v[2] = 3;

    //Push-back to enlarge (3)
    v.push_back(4);

    // Printing (4)
    // Printing Vector -1
    cout << v[0];
    cout << v[1];
    cout << v[2];
    cout << v[3];

    // Printing vector -2
    for (int i = 0; i < v.size(); i++)
    {

        cout << v[i] << endl;
    }

    // Printing vector - 3
    for (auto i : v)
    {

        cout << v[i] << endl;
    }

    // Size and Capacity (5)
    // size is actual size
    // capacity is allocated memory size

    cout << "\n Size of vector is " << v.size() << endl;
    cout << "Capacity of vector is " << v.capacity() << endl;
    return 0;
}
