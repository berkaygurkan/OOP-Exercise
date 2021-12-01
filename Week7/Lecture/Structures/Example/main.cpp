#include <iostream>
#include <math.h>
using namespace std;

struct Loan
{
    int ID;       // ID number for Loan
    float amount; // Amount of Loan
    float rate;   // Annual interest rate
    int term;     // number of months, lenghth of loan
};

float payment(Loan tempLoan);
void initLoan(Loan &tempLoan);

int main()
{
    Loan firstLoan;
    Loan secondLoan;
    float monthly_payment;
    float monthly_payment2;
    /*
        cout << "Please enter loan ID :";
        cin >> firstLoan.ID;

        cout << "Please enter loan amount :";
        cin >> firstLoan.amount;

        cout << "Please enter loan rate :";
        cin >> firstLoan.rate;

        cout << "Please enter loan term :";
        cin >> firstLoan.term;
    */
    initLoan(firstLoan);
    initLoan(secondLoan);

    monthly_payment = payment(firstLoan);
    monthly_payment2 = payment(secondLoan);

    cout << "The monthly payment for first loan " << firstLoan.ID << " is : " << monthly_payment << endl;
    cout << "The monthly payment for second loan " << secondLoan.ID << " is : " << monthly_payment2 << endl;
    cout << "Total monthly payment is " << monthly_payment + monthly_payment2;
    return 0;
}

float payment(Loan tempLoan)
{
    tempLoan.rate = tempLoan.rate / 1200;
    return tempLoan.amount * tempLoan.rate * (pow((tempLoan.rate + 1), tempLoan.term) / (pow((tempLoan.rate + 1), tempLoan.term) - 1));
}

void initLoan(Loan &tempLoan)
{
    cout << "************************" << endl;
    cout << "Please enter loan ID :";
    cin >> tempLoan.ID;

    cout << "Please enter loan amount :";
    cin >> tempLoan.amount;

    cout << "Please enter loan rate :";
    cin >> tempLoan.rate;

    cout << "Please enter loan term :";
    cin >> tempLoan.term;
}