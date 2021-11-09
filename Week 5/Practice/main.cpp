/*#include <iostream>
#include <cstring>

// Berkay -> 6 letters
// char ArrayName[MaxNum + 1]
//char myCTypeString[6] = "Berka";

using namespace std;
char S1[] = "123";
char S2[20] = "123.34";

int int1;
float float1;

int main()
{
    int1 = atoi(S1);
    float1 = atof(S2);

    cout << int1 << endl;
    cout << float1 << endl;
}
*/
/*Class Type String*/

#include <iostream>
//#include <cstring>
/* #include <string>
using namespace std;

string TypeClass;
char TypeC[] = "Hey";
char TypeC2[4];

int main()
{
    // C type to Class type
    TypeClass = TypeC;

    strcpy(TypeC2, TypeClass.c_str());

    cout
        << TypeC2;
}
*/

#include <string>
#include <vector>
using namespace std;

vector<int> v;

int main()
{
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for (int i = 0; i < v.size(); i++)
    {

        cout << v[i];
    }
}
