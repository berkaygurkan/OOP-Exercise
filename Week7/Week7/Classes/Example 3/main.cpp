#include <iostream>
#include <cmath>
using namespace std;

class Loan // loan class definition
{
public:
    Loan();
    Loan(int l_ID, float l_amount, float l_rate, int l_term);
    void set();
    float payment();
    void display();

private:
    int ID;       // assume an unique integer between 11-9999
    float amount; // $ amount of the loan
    float rate;   // annual interest rate
    int term;     // number of months, length of the loan
};

int main()
{
    Loan loan1(1234, 2300, 5.5, 48);
    Loan loan2;
    Loan loan3;
    Loan loan4 = loan1;

    cout << "Display Loan 1" << endl;
    loan1.display();

    cout << "Display Loan 2" << endl;
    loan2.display();

    cout << "Display Loan 3" << endl;
    loan3.display();

    cout << "Display Loan 4" << endl;
    loan4.display();

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
    cout << "Loan ID : " << ID << endl;
    cout << "Loan amount :" << amount << endl;
    cout << "Loan rate :" << rate << endl;
    cout << "Loan term : " << term << endl;
    cout << endl;
}

Loan ::Loan(int l_ID, float l_amount, float l_rate, int l_term)
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