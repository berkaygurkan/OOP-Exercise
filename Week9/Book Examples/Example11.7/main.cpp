#include <iostream>
#include <cstdlib>
#include <cctype>
#include <fstream>
using namespace std;

class Money
{
public:
    // Friend funcition declarations
    // friend Money add(Money amount1, Money amount2);
    friend Money operator+(Money amount1, Money amount2);
    friend bool operator==(Money amount1, Money amount2);

    // Unary operator overloading
    friend Money operator-(Money amount1, Money amount2);
    friend Money operator-(Money amount1);
    friend bool operator<(Money amount1, Money amount2);

    // friend bool equal(Money amount1, Money amount2);
    //  Constructor function declarations
    Money(long dollars, int cents);
    Money(long dollars);
    Money();

    // Accessor Function
    double getValue();

    // istream is a class of cin ostream is class of cout

    // void input(istream &ins);
    // void output(ostream &outs);

    friend istream &operator>>(istream &ins, Money &amount);
    friend ostream &operator<<(ostream &outs, Money amount);

private:
    long allCents;
};

int digitToInt(char c);

int main()
{
    Money amount[5], max;
    int i;
    cin >> amount[0];
    max = amount[0];

    for (i = 1; i < 5; i++)
    {
        cin >> amount[i];
        if (max < amount[i])
        {
            max = amount[i];
        }
    }

    Money difference[5];
    for (i = 1; i < 5; i++)
    {
        difference[i] = max - amount[i];
    }

    cout << "Highest amount is " << max << endl;
    for (i = 1; i < 5; i++)
    {
        cout << amount[i] << "off by " << difference[i] << endl;
    }

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

Money operator+(Money amount1, Money amount2)
{
    Money temp;
    temp.allCents = amount1.allCents + amount2.allCents;

    return temp;
}

Money operator-(Money amount1, Money amount2)
{
    Money temp;
    temp.allCents = amount1.allCents - amount2.allCents;

    return temp;
}

Money operator-(Money amount1)
{
    Money temp;
    temp.allCents = -amount1.allCents;

    return temp;
}

bool operator==(Money amount1, Money amount2)
{
    return (amount1.allCents == amount2.allCents);
}

int digitToInt(char c)
{
    return (static_cast<int>(c) - static_cast<int>('0'));
}

istream &operator>>(istream &ins, Money &amount)
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
    amount.allCents = dollars * 100 + cents;
    if (negative)
        amount.allCents = -amount.allCents;

    return ins;
}

ostream &operator<<(ostream &outs, Money amount)
{
    long PositiveCents, dollars, cents;
    PositiveCents = labs(amount.allCents);

    dollars = PositiveCents / 100;
    cents = PositiveCents % 100;

    if (amount.allCents < 0)
    {
        outs << "-$" << dollars << ".";
    }
    else
        outs << "$" << dollars << ".";

    if (cents < 0)
        outs << '0';

    outs << cents;

    return outs;
}

bool operator<(Money amount1, Money amount2)
{
    return (amount1.allCents < amount2.allCents);
}