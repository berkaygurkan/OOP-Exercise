/*Example 4*/
// Using vectors
// Create a program that will ask for some values and display their average in dynamical array way.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //vector<int> v(4);
    vector<int> v(0);
    char ans = 'y';
    float sum = 0;
    int count = 0;

    // Program will work till i feed y or Y character
    while (ans == 'y' || ans == 'Y')
    {
        cout << "Enter an integer \n";
        /*cin >> v[count];
        sum += v[count];
        cout << v[count];*/
        //count++;

        // Correct way

        int new_num;
        cin >> new_num;
        v.push_back(new_num);
        sum += v[count];

        cout << "Vector size is " << v.size() << endl;

        cout << "Do you wish to enter a new number y/n \n";
        cin >> ans;
    }

    if (count > 0)
    {
        cout << "Average of " << count << " numbers is " << sum / v.size() << endl;
        //cout << "Average of " << count << " numbers is " << sum / count << endl;
    }

    return 0;
}
