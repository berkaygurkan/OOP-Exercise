#include <iostream>
using namespace std;

class Money
{
public:
    // Friend funcition declarations
    friend Money add(Money amount1, Money amount2);
    friend bool equal(Money amount1, Money amount2);
    // Constructor function declarations
    Money(long dollars, int cents);
    Money(long dollars);
    Money();

    // Accessor Function
    double getValue();

    // istream is a class of cin ostream is class of cout

    void input(istream &ins);
    void output(ostream &outs);

private:
    long allCents;
};

int digitToInt(char c);

int main()
{
    Money yourAmount;
    Money myAmount(9, 10);
    Money ourAmount;

    cout << "Please enter an amount of money : ";
    yourAmount.input(cin);
    cout << "Your amount is ";
    yourAmount.output(cout);
    cout << endl;
    cout << "My amount is ";
    myAmount.output(cout);
    cout << endl;

    if (equal(yourAmount, myAmount))
    {
        cout << "We have the same amounts" << endl;
    }
    else
        cout << "One of us is reacher" << endl;

    ourAmount = add(myAmount, yourAmount);

    cout << "Our amount is ";
    ourAmount.output(cout);
    cout << endl;

    return 0;
}

// Empty Constructor
Money::Money()
{
    allCents = 0;
}

Money::Money(long dollars, int cents)
{
    if (dollars * cents < 0) // If one is positive and other is negative
    {
        cout << "Illegal values for amount " << endl;
        exit(1);
    }
    allCents = dollars * 100 + cents;
}

Money::Money(long dollars)
{
    allCents = dollars * 100;
}

bool equal(Money amount1, Money amount2)
{
    return (amount1.allCents == amount2.allCents);
}

Money add(Money amount1, Money amount2)
{
    Money temp;
    temp.allCents = amount1.allCents + amount2.allCents;

    return temp;
}

void Money::input(istream &ins)
{
    char oneChar, decimalPoint, digit1, digit2;
    long dollars;
    int cents;
    bool negative;

    ins >> oneChar;
    if (oneChar == ' ')
    {
        negative = true;
        ins >> oneChar;
    }
    else
        negative = false;

    ins >> dollars >> decimalPoint >> digit1 >> digit2;

    if (oneChar != '$' || decimalPoint != '.' || !isdigit(digit1) || !isdigit(digit2))
    {
        cout << "Illegal values for amount " << endl;
        exit(1);
    }
    cents = digitToInt(digit1) * 10 + digitToInt(digit2);

    allCents = dollars * 100 + cents;
}
void Money::output(ostream &outs)
{
    long PositiveCents, dollars, cents;
    PositiveCents = labs(allCents);

    dollars = PositiveCents / 100;
    cents = PositiveCents % 100;

    if (allCents < 0)
    {
        outs << "-$" << dollars << ".";
    }
    else
        outs << "$" << dollars << ".";

    if (cents < 0)
        outs << '0';

    outs << cents;
}

int digitToInt(char c)
{
    return (static_cast<int>(c) - static_cast<int>('0'));
}