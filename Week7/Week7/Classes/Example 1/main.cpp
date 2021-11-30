#include <iostream>
#include <cmath>
using namespace std;
/*
class Loan // loan class definition
{
public:
    int ID;       // assume an unique integer between 11-9999
    float amount; // $ amount of the loan
    float rate;   // annual interest rate
    int term;     // number of months, length of the loan
};
*/

class Loan // loan class definition
{
public:
    void set();
    float payment();
    void display();

private:
    int ID;       // assume an unique integer between 11-9999
    float amount; // $ amount of the loan
    float rate;   // annual interest rate
    int term;     // number of months, length of the loan
};

// float payment(Loan ;

int main()
{
    Loan loan1;
    loan1.set();
    loan1.display();
    float monthly_payment;
    monthly_payment = loan1.payment();
    cout << "The monthly payment for loan 1" << monthly_payment << endl;

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

float Loan::payment()
{
    rate = rate / 1200; // To convert % yearly rate to monthly fraction
    return amount * rate * (pow((rate + 1), term) / (pow((rate + 1), term) - 1));
}

void Loan::display()
{
    cout << "****************" << endl;
    cout << "Loan information" << endl;
    cout << "Loan ID : " << ID;
    cout << "Loan amount :" << amount;
    cout << "Loan rate :" << rate;
    cout << "Loan term : " << term;
}