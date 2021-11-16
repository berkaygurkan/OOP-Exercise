
#include <iostream>
using namespace std;

typedef int *IntArrayPtr;

void fill_array(int a[], int size);
void sort(int a[], int size);

int main()
{
    using namespace std;

    cout << " This program sorts numbers from lowest to highest. \n";

    int array_size;
    cout << "How many numbers will be sorted" << endl;
    cin >> array_size;

    IntArrayPtr a;
    a = new int[array_size];

    fill_array(a, array_size);
    //sort(a, array_size);

    cout << "In sorted order the numbers are : \n";

    for (int index = 0; index < array_size; index++)
    {
        cout << a[index] << " ";
    }
    cout << endl;

    delete[] a;
    return 0;
}

void fill_array(int a[], int size)
{
    cout << " Enter " << size << " integers \n";

    for (int index = 0; index < size; index++)
    {
        cin >> a[index];
    }
}