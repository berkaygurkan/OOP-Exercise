#include <iostream>

#define NDEBUG
#include <cassert>

using namespace std;

double newtonSqroot(double n, int numIterations);

int main()
{
    int myNum, myIteration;
    double result;
    cout << "Please enter a positive :";
    cin >> myNum;
    cout << "Please enter how many iterations are needed :";
    cin >> myIteration;

    result = newtonSqroot(myNum, myIteration);

    cout << endl;
    cout << "Result is  :" << result;

    return 0;
}

double newtonSqroot(double n, int numIterations)
{
    double answer = 1;
    int i = 0;

    assert((n > 0) && numIterations > 0);
    while (i < numIterations)
    {
        answer = 0.5 * (answer + n / answer);
        i++;
    }
    return answer;
}