/*Example 4*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    char ans = 'y';
    float sum = 0;
    int count = 0;

    while (ans == 'y' || ans == 'Y')
    {
        cout << "Enter an integer \n";
        /*
        cin >> v[count];
        sum += v[count];
        */
        int new_num;
        cin >> new_num;
        v.push_back(new_num);
        sum += v[count];
        count++;

        cout << "Vector size is " << v.size() << endl;

        cout << "Do you wish to enter a new number y/n \n";
        cin >> ans;
    }

    if (count > 0)
    {
        cout << "Average of " << count << " numbers is " << sum / v.size() << endl;
    }

    return 0;
}
