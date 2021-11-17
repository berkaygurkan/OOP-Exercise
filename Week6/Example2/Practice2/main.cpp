
// P10_1.cpp - A program that uses an array of integers
#include <iostream>
using namespace std;
int SIZE = 8; // Step (3)
int main()
{
    //int numlist[8];
    //  int numlist[SIZE];   // Step(3)

    cout << "Enter the size of the array" << endl;
    cin >> SIZE;

    int *numlist = new int[SIZE];

    int i;

    // Read 8 integers from the keyboard
    //for (i = 0; i < 8; i++)       //Step(1)
    for (i = 0; i < SIZE; i++) // Step(4)
    {
        cout << "Enter value #" << i + 1 << ": ";
        cin >> numlist[i];
    }
    // Display the numbers in a reverse order
    //for (i = 8; i > 0; i--) //Step(1)
    for (i = SIZE; i > 0; i--) // Step(4)
    {
        cout << "Value #" << i << ": ";
        //cout << numlist[i - 1] << endl; //Pay attention to i-1!           // Step(1)
        cout << *(numlist + (i - 1)) << endl; //Pay attention to i-1!       // Step(2)
    }

    delete[] numlist;
    return 0;
}

/*
//Note that SIZE was defined as a const int.Now lets modify this program and re - write it creating the array dynamically.

// P12_2a.cpp. Illustrates dynamic arrays
#include <iostream>
using namespace std;

int main(void)
{
    int SIZE;
    cout << "Enter the size of the array" << endl;
    cin >> SIZE;

    int *numlist = new int[SIZE];

    // Read SIZE integers from the keyboard
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter value #" << i + 1 << ": ";
        cin >> numlist[i];
    }
    // Display the numbers in a reverse order
    for (int i = SIZE; i > 0; i--)
    {
        cout << "Value #" << i << ": ";
        cout << numlist[i - 1] << endl; //Pay attention to i-1!
    }
    delete[] numlist;
    return 0;
}*/