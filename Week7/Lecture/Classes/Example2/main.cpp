#include <iostream>
#include <math.h>
using namespace std;

class Loan
{
public:
    Loan(int l_ID, int l_amount, float l_rate, int l_term);
    Loan();
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

int main()
{
    Loan firstLoan{1, 500, 10, 12};
    Loan secondLoan;

    secondLoan.setLoan();
    firstLoan.display();
    secondLoan.display();

    return 0;
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

Loan ::Loan(int l_ID, int l_amount, float l_rate, int l_term)
{
    ID = l_ID;
    amount = l_amount;
    rate = l_rate;
    term = l_term;
}

Loan ::Loan()
{
    ID = 0;
    amount = 0;
    rate = 0;
    term = 0;
}