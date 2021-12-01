#include <iostream>
#include <math.h>
using namespace std;

class Loan
{
public:
    float payment();
    void setLoan();
    void display();

private:
    int ID;       // ID number for Loan
    float amount; // Amount of Loan
    float rate;   // Annual interest rate
    int term;     // number of months, lenghth of loan
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

    cout << "The monthly payment for first loan is : " << monthly_payment << endl;
    cout << "The monthly payment for second loan is : " << monthly_payment2 << endl;
    cout << "Total monthly payment is " << monthly_payment + monthly_payment2;

    firstLoan.display();
    secondLoan.display();

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

void Loan::display()
{
    cout << "****** Loan information is printing*************" << endl;
    cout << "Loan ID :" << ID << endl;
    cout << "Loan Amount :" << amount << endl;
    cout << "Loan Rate :" << rate << endl;
    cout << "Loan Term :" << term << endl;
}