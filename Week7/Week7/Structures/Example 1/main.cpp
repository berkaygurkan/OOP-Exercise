#include <iostream>
#include <cmath>
using namespace std;

struct Loan
{
    int ID;
    float amount;
    float rate;
    int term;
};

float payment(Loan myLoan);

int main()
{
    Loan loan1;
    float monthly_payment;

    // Initialize the loan1 structure
    cout << "Enter ID of this loan" << endl;
    cin >> loan1.ID;

    cout << "Enter amount of this loan" << endl;
    cin >> loan1.amount;

    cout << "Enter rate of this loan" << endl;
    cin >> loan1.rate;

    cout << "Enter term of this loan" << endl;
    cin >> loan1.term;

    monthly_payment = payment(loan1);

    cout << "The monthly payment for loan " << loan1.ID << " is: " << monthly_payment << endl;

    return 0;
}

float payment(Loan myLoan)
{
    myLoan.rate = myLoan.rate / 1200;
    return myLoan.amount * myLoan.rate * (pow((myLoan.rate + 1), myLoan.term) / (pow((myLoan.rate + 1), myLoan.term) - 1));
}