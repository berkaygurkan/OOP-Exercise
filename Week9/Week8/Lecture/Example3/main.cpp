/*Example 2 - Overloading << and >> Operators*/

#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

/*Overloading input >> and output << operator looks similar to basic operators
but we have to think about return data_type.


1 ) output << should return its first arguement which is a stream of type ostream
2 ) Whenever a operator or function returns stream we must add & to returned data type
Because we have tor will return reference not the data.
3 ) input (extraction) >> obeys first rule too but we have to use call by reference in second argument
because we want stream to change object members.

friend ostream& operator <<(ostream &outs, Class theObject)
friend istream& operator >>(istream &ins,Class& theObject )
*/

/*This program adds two different peoples money
It reads two values from input.txt and result is printed on output.txt
*/

class Money
{
private:
    long dollars; // Step(1)
    long cents;   // Step(1)

public:
    // Constructor Functions
    Money();               // Step(1)
    Money(long d, long c); // Step(1)

    friend void read_money(istream &ins, Money &m); // Step(2)
    friend void write_money(ostream &ous, Money m); // Step(2)

    // Lets use << and>> operators instead
    friend istream &operator>>(istream &ins, Money &m); // Q(1)
    friend ostream &operator<<(ostream &ous, Money m);  // Q(1)

    // Mutator Function
    friend Money operator+(Money m1, Money m2); // Step (1)

    // Accessor Function
    void display_money(); // Step(1)
};

// Empty Constructor
Money::Money() : dollars(0), cents(0) // Step(1)
{
}

// Overloaded Constructor
Money::Money(long d, long c) // Step(1)
{
    dollars = d;
    cents = c;
}

void Money::display_money() // Step(1)
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

Money operator+(Money m1, Money m2) // Step(1)
{
    Money temp;
    long cents1 = m1.dollars * 100 + m1.cents;
    long cents2 = m2.dollars * 100 + m2.cents;

    temp.dollars = (cents1 + cents2) / 100;
    temp.cents = (cents1 + cents2) % 100;

    return temp;
}

void read_money(istream &ins, Money &m) // Step(2)
{
    long d, c;
    ins >> d;
    ins >> c;
    m.dollars = d;
    m.cents = c;
}

void write_money(ostream &ous, Money m) // Step(2)
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

istream &operator>>(istream &ins, Money &m) // Q(1)
{
    long d, c;
    ins >> d;
    ins >> c;
    m.dollars = d;
    m.cents = c;

    return ins;
}

ostream &operator<<(ostream &ous, Money m) // Q(1)
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
    ifstream in_s;  // Step(1)
    ofstream out_s; // Step(21

    in_s.open("input.txt");   // Step(1)
    out_s.open("output.txt"); // Step(1)

    Money m1, m2, m3, m4; // Step(1)

    // read_money(in_s, m1); // Step(2)
    in_s >> m1; // Q(1)
    m1.display_money();

    // read_money(in_s, m2); // Step(2)
    in_s >> m2;         // Q(1)
    m2.display_money(); // Step(1)

    m3 = m1 + m2;                        // Step(1)
    cout << "Total amount of money is "; // Step(1)
    // write_money(cout, m3);            // Step(2)
    // write_money(out_s, m3);           // Step(2)
    cout << m3;  // Step(3)
    out_s << m3; // Step(3)

    return 0;
}
