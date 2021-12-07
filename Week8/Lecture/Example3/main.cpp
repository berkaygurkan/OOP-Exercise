#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

// Operator overloading (>> and <<)

/*This program adds two different peoples money
It reads two values from input.txt and result is printed on output.txt
*/

class Money
{
private:
    long dollars;
    long cents;

public:
    // Constructor Functions
    Money();
    Money(long d, long c);

    friend void read_money(istream &ins, Money &m);
    friend void write_money(ostream &ous, Money m);

    // Lets use << and>> operators instead
    friend istream &operator>>(istream &ins, Money &m);
    friend ostream &operator<<(ostream &ous, Money m);

    // Mutator Function
    friend Money operator+(Money m1, Money m2);

    // Accessor Function
    void display_money();
};

// Empty Constructor
Money::Money() : dollars(0), cents(0)
{
}

// Overloaded Constructor
Money::Money(long d, long c)
{
    dollars = d;
    cents = c;
}

void Money::display_money()
{
    if (dollars > 0 || cents > 0)
    {
        cout << "$" << dollars << ".";
        if (cents < 9)
            cout << '0';
        cout << cents << endl;
    }
    else
    {
        dollars = labs(dollars);
        cents = labs(cents);
        cout << "-$" << dollars << ".";
        if (cents < 9)
            cout << '0';
        cout << cents << endl;
    }
}

Money operator+(Money m1, Money m2)
{
    Money temp;
    long cents1 = m1.dollars * 100 + m1.cents;
    long cents2 = m2.dollars * 100 + m2.cents;

    temp.dollars = (cents1 + cents2) / 100;
    temp.cents = (cents1 + cents2) % 100;

    return temp;
}
/*
void read_money(istream &ins, Money &m)
{
    long d, c;
    ins >> d;
    ins >> c;
    m.dollars = d;
    m.cents = c;
}*/

void write_money(ostream &ous, Money m)
{
    if (m.dollars > 0 || m.cents > 0)
    {
        ous << "$" << m.dollars << ".";
        if (m.cents < 9)
            ous << '0';
        ous << m.cents << endl;
    }
    else
    {
        m.dollars = labs(m.dollars);
        m.cents = labs(m.cents);
        ous << "-$" << m.dollars << ".";
        if (m.cents < 9)
            ous << '0';
        ous << m.cents << endl;
    }
}

istream &operator>>(istream &ins, Money &m)
{
    long d, c;
    ins >> d;
    ins >> c;
    m.dollars = d;
    m.cents = c;

    return ins;
}

ostream &operator<<(ostream &ous, Money m)
{
    if (m.dollars > 0 || m.cents > 0)
    {
        ous << "$" << m.dollars << ".";
        if (m.cents < 9)
            ous << '0';
        ous << m.cents << endl;
    }
    else
    {
        m.dollars = labs(m.dollars);
        m.cents = labs(m.cents);
        ous << "-$" << m.dollars << ".";
        if (m.cents < 9)
            ous << '0';
        ous << m.cents << endl;
    }
    return ous;
}

int main()
{
    ifstream in_s;
    ofstream out_s;

    in_s.open("input.txt");
    out_s.open("output.txt");

    long d, c;
    Money m1, m2, m3, m4;

    in_s >> m1;
    m1.display_money();

    in_s >> m2;
    m2.display_money();

    m3 = m1 + m2;
    cout << "Total amount of money is ";
    cout << m3;
    out_s << m3;
    // write_money(cout, m3);
    // write_money(out_s, m3);

    return 0;
}
