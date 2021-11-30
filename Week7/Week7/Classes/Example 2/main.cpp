#include <iostream>
#include <cmath>
using namespace std;

class Loan // loan class definition
{
public:
    void set();
    float getMonthlyPayment();
    void payment();
    void display();

private:
    int ID;       // assume an unique integer between 11-9999
    float amount; // $ amount of the loan
    float rate;   // annual interest rate
    int term;     // number of months, length of the loan
    float monthlyPayment;
};

// float payment(Loan ;
float add_loans(Loan myLoan1, Loan myLoan2);

int main()
{
    Loan loan1, loan2;
    loan1.set();
    loan1.payment();
    loan1.display();

    loan2.set();
    loan2.payment();
    loan2.display();

    cout << "Total Monthly Payment of Two Loans are  : " << add_loans(loan1, loan2) << endl;
    return 0;
}

void Loan::set()
{
    // Initialize the loan1 object
    cout << "Enter the ID of this loan \n";
    cin >> ID;

    cout << "Enter the amount of this loan \n";
    cin >> amount;

    cout << "Enter the annual interest rate of this loan (in %) \n";
    cin >> rate;

    cout << "Enter the term (number of months, length of the loan) \n";
    cin >> term;
}

void Loan::payment()
{
    rate = rate / 1200; // To convert % yearly rate to monthly fraction
    monthlyPayment = amount * rate * (pow((rate + 1), term) / (pow((rate + 1), term) - 1));
}

void Loan::display()
{
    cout << "****************" << endl;
    cout << "Loan information" << endl;
    cout << "Loan ID : " << ID << endl;
    cout << "Loan amount :" << amount << endl;
    cout << "Loan rate :" << rate << endl;
    cout << "Loan term : " << term << endl;
    cout << "Monthly Payment : " << monthlyPayment << endl;
}

float Loan::getMonthlyPayment()
{
    return monthlyPayment;
}

float add_loans(Loan myLoan1, Loan myLoan2)
{
    return myLoan1.getMonthlyPayment() + myLoan2.getMonthlyPayment();
}