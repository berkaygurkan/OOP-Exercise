
#include <iostream>
#include <cstring>  // Stroes C Type String Functions
#include <cstdlib>  // For char array conversions
using namespace std;


// C String : Arrray with base type of char that stores strings of characters
// Class String : New way of string implementing strings (Cpp)
// Vectors: Array that can grow or shrink. Their size can be changed during promgram running.


/* C Type Strings */
// Ends with null "\0" character in order to indicate the end of "real" characters.
// How to Initialize
// char ArrayName[MaxStringCharNum + 1]


// We can initialize when it is declared
char myString[6] = "Hello";


// myString[0]= 'H'
// myString[1]= 'e'
// myString[2]= 'l'
// myString[3]= 'l'
// myString[4]= 'o'
// myString[5]= '\0'

char myString2[150] = "Hi There";


char myEmptyString[5];


char s1[15]="Berkay";
char s2[]="Gurkan";

int main()
{
    // We can't use "=" ,"==" or similar operators with char arrau
    // myEmptyString = "Guess we have problem";
    
    // Correct way of initialization after declaration
    //strcpy(myEmptyString,"Hell");
    strncpy(myEmptyString,"Hello",5); // Do not forget to leace room for null
    
    cout<<myString2<<endl;
    cout<<myEmptyString<<endl;
    cout<<myString[4]<<endl;
    cout<<strlen(myEmptyString)<<endl;
    cout<<myEmptyString[4]<<endl;
    
    
    // using == for comparison doesnt give syntax error
    // but result is not correct.
    
    //if(s1==s2)
    if(!strcmp(s1,s2))
    {
        cout<<"Strings are the same !"<<endl;
    }
    else
        cout <<"Strings are NOT the same "<<endl;

    // Concatenate (chaining) strings    
    //strcat(s1,s2);
    strncat(s1,s2,4);
    cout<<s1<<endl;
    
    // C-String Input and Output
    // >> operator omits blank spaces and specia
    // characters
    
    char a[80];
    char b[80];
    cout<<"Please type";;
    //cin>>a>>b;
    cin.getline(a,80);
    cin.getline(b,80);
    cout<<a<<b<<"END OF PROGRAM";
    
    // char array to integer or float
    // atoi arrat to integer
    // atod array to double
    // atof arrat to float
    
    char myCharArr[] = "123";
    char myCharArrF[] ="123.23";
    
    int myNumInt = atoi(myCharArr);
    float myNumFloat = atof(myCharArr);
    
    cout<<myNumInt<<endl;
    cout<<myNumFloat<<endl;
    
    
    
    
    
    return 0;
}
