#include <iostream>
#include <cstdlib>
using namespace std;

// Private variables are only available to member functions and cannot be reached from out of scope.
// A function called friend function can be given authority to access private variables.
// In this case a friend function is not a member function of class.
// Friend function can access and change private variables.

/*This program adds two different peoples money*/

class Money
{
private:
    long dollars;
    long cents;

public:
    // Constructor Functions
    Money();
    Money(long d, long c);

    // Mutator Function
    // void add(Money m1, Money m2);                               // Step(1)
    // friend void add(Money m1, Money m2, Money &sum);            // Step(2)

    friend Money add(Money m1, Money m2);  // Q(1)
    friend Money subs(Money m1, Money m2); // Q(2)

    // Accessor Function
    void display_money();
    void Read();
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

void Money::Read()
{
    cout << "Enter dollar amonunt :";
    cin >> dollars;
    cout << "Enter cent amonunt :";
    cin >> cents;
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
/* // Step (1)
void Money::add(Money m1, Money m2)
{
    long cents1 = m1.dollars * 100 + m1.cents;
    long cents2 = m2.dollars * 100 + m2.cents;

    dollars = (cents1 + cents2) / 100;
    cents = (cents1 + cents2)  % 100;
}
*/
/*
// Step(2)
void add(Money m1, Money m2, Money &sum)
{
    long cents1 = m1.dollars * 100 + m1.cents;
    long cents2 = m2.dollars * 100 + m2.cents;

    sum.dollars = (cents1 + cents2) / 100;
    sum.cents = (cents1 + cents2) % 100;
}
*/
// Q(1)
Money add(Money m1, Money m2)
{
    Money temp;
    long cents1 = m1.dollars * 100 + m1.cents;
    long cents2 = m2.dollars * 100 + m2.cents;

    temp.dollars = (cents1 + cents2) / 100;
    temp.cents = (cents1 + cents2) % 100;

    return temp;
}

void read_money(long &d, long &c)
{
    cout << "Enter dollar amonunt :";
    cin >> d;
    cout << "Enter cent amonunt :";
    cin >> c;
}

Money subs(Money m1, Money m2)
{
    Money temp;
    long cents1 = m1.dollars * 100 + m1.cents;
    long cents2 = m2.dollars * 100 + m2.cents;

    temp.dollars = (cents1 - cents2) / 100;
    temp.cents = (cents1 - cents2) % 100;

    return temp;
}

int main()
{
    long d, c;
    Money m1, m2, m3, m4;

    // read_money(d, c);        // Step 1
    // m1 = Money(d, c);        // Step 1
    m1.Read(); // Q(3)
    m1.display_money();

    m2.Read(); // Q(4)
    // read_money(d, c);         // Step 2
    // m2 = Money(d, c);         // Step 2
    m2.display_money();

    // Sum
    // m3.add(m1, m2);         // Step (1)
    // add(m1, m2, m3);        // Step (2)
    m3 = add(m1, m2);
    m4 = subs(m1, m2);
    cout << "Total amount of money is ";
    m3.display_money();
    cout << "First one minus second one is ";
    m4.display_money();
    cout << endl;

    return 0;
}