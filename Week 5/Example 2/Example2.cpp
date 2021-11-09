/*Example 2*/
/*
#include <iostream>

using namespace std;

int main()
{
    string phrase;
    string adjective("fried"), noun("ants");
    string wish = "Bon appetite!";

    phrase = "I love " + adjective + " " + noun + "!";
    cout << phrase << endl
         << wish << endl;
    return 0;
}*/

/*
#include <iostream>
using namespace std;

int main()
{
    string phrase, temp1, temp2;
    string adjective("fried"), noun("ants");
    string wish = "Bon appetite!";

    phrase = "I love " + adjective + " " + noun + "!";
    cout << phrase << endl
         << wish << endl;

    // copy phrase to newphrase
    string newphrase(phrase);

    // append wish to the end of newpharase
    newphrase += wish;

    // separates the first sentence
    temp1 = newphrase.substr(0, 18);
    cout << temp1 << endl;

    // separates the second sentence
    temp2 = newphrase.substr(18, 11);
    cout << temp2 << endl;

    return 0;
}*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
using namespace std;

void changeStr(string &myString, string substring, string change)
{

    while (myString.find(substring) != string::npos)
    {
        int posString = myString.find(substring);
        myString.erase(posString, substring.size());
        myString.insert(posString, change);
    }
}

int main()
{
    cout << "First Line : ";
    string line1;
    getline(cin, line1);

    cout << "Second Line : ";
    string line2;
    getline(cin, line2);

    string line = line1 + line2;

    changeStr(line, "G++", "g++");
    changeStr(line, "Gcc", "gcc");
    cout << "\n New String " << endl;
    cout << line << endl;

    return 0;
}