#include <iostream>
#include <math.h>
using namespace std;

class Loan
{
public:
    int ID;       // ID number for Loan
    float amount; // Amount of Loan
    float rate;   // Annual interest rate
    int term;     // number of months, lenghth of loan
    float payment();
    void setLoan();
};

int main()
{
    Loan firstLoan;
    Loan secondLoan;
    float monthly_payment;
    float monthly_payment2;

    firstLoan.setLoan();
    secondLoan.setLoan();

    monthly_payment = firstLoan.payment();
    monthly_payment2 = secondLoan.payment();

    cout << "The monthly payment for first loan " << firstLoan.ID << " is : " << monthly_payment << endl;
    cout << "The monthly payment for second loan " << secondLoan.ID << " is : " << monthly_payment2 << endl;
    cout << "Total monthly payment is " << monthly_payment + monthly_payment2;
    return 0;
}

float Loan::payment()
{
    rate = rate / 1200;
    return amount * rate * (pow((rate + 1), term) / (pow((rate + 1), term) - 1));
}

void Loan::setLoan()
{
    cout << "************************" << endl;
    cout << "Please enter loan ID :";
    cin >> ID;

    cout << "Please enter loan amount :";
    cin >> amount;

    cout << "Please enter loan rate :";
    cin >> rate;

    cout << "Please enter loan term :";
    cin >> term;
}