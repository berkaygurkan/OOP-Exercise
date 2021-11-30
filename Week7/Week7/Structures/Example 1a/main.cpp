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

void initialize_loan(Loan &myLoan);

int main()
{
    Loan loan1, loan2;
    float monthly_payment1;
    float monthly_payment2;

    initialize_loan(loan1);
    initialize_loan(loan2);

    monthly_payment1 = payment(loan1);
    monthly_payment2 = payment(loan2);

    cout << "The monthly payment for loan1 " << loan1.ID << " is: " << monthly_payment1 << endl;
    cout << "The monthly payment for loan2 " << loan2.ID << " is: " << monthly_payment2 << endl;
    return 0;
}

float payment(Loan myLoan)
{
    myLoan.rate = myLoan.rate / 1200;
    return myLoan.amount * myLoan.rate * (pow((myLoan.rate + 1), myLoan.term) / (pow((myLoan.rate + 1), myLoan.term) - 1));
}

void initialize_loan(Loan &myLoan)
{

    // Initialize the loan1 structure
    cout << "Enter ID of this loan" << endl;
    cin >> myLoan.ID;

    cout << "Enter amount of this loan" << endl;
    cin >> myLoan.amount;

    cout << "Enter rate of this loan" << endl;
    cin >> myLoan.rate;

    cout << "Enter term of this loan" << endl;
    cin >> myLoan.term;
}