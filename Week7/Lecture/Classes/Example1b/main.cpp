#include <iostream>
#include <math.h>
using namespace std;

class Loan
{
public:
    void payment();
    void setLoan();
    void display();
    float getMonthlyPayment()
    {
        return monthlyPayment;
    }

private:
    int ID;       // ID number for Loan
    float amount; // Amount of Loan
    float rate;   // Annual interest rate
    int term;     // number of months, lenghth of loan
    float monthlyPayment;
};

float add_loans(Loan first, Loan second);
int main()
{
    Loan firstLoan;
    Loan secondLoan;

    // float monthly_payment;
    // float monthly_payment2;

    firstLoan.setLoan();
    secondLoan.setLoan();

    firstLoan.payment();
    secondLoan.payment();

    cout << "The monthly payment for first loan is : " << firstLoan.getMonthlyPayment() << endl;
    cout << "The monthly payment for second loan is : " << secondLoan.getMonthlyPayment() << endl;
    cout << "Total monthly payment is " << add_loans(firstLoan, secondLoan);

    firstLoan.display();
    secondLoan.display();

    return 0;
}

void Loan::payment()
{
    rate = rate / 1200;
    monthlyPayment = amount * rate * (pow((rate + 1), term) / (pow((rate + 1), term) - 1));
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

float add_loans(Loan first, Loan second)
{
    return first.getMonthlyPayment() + second.getMonthlyPayment();
}