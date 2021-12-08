/*Example 1 - Friend Functions*/

// CONST örnek Ekle

#include <iostream>
#include <cstdlib>
using namespace std;

/*
 A friend fucntion of a class is not a member functionn of the class
 but it has access to private variables just as public member functions*/

/* declaration
friend return_type func_name(arg1,arg2..)*/
/* definition
return_type func_name(arg1,arg2..)*/

/*This program adds two different peoples money*/
// 1st way using member functions
// 2nd way using friend function

void read_money(long &d, long &c);

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
    void Read();                                     // Q(3)
    void add(Money m1, Money m2);                    // Step(1)
    friend void add(Money m1, Money m2, Money &sum); // Step(2)

    friend Money add(Money m1, Money m2);  // Q(1)
    friend Money subs(Money m1, Money m2); // Q(2)

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
// Step (1)
void Money::add(Money m1, Money m2)
{
    long cents1 = m1.dollars * 100 + m1.cents;
    long cents2 = m2.dollars * 100 + m2.cents;

    dollars = (cents1 + cents2) / 100;
    cents = (cents1 + cents2) % 100;
}

// Step(2)
void add(Money m1, Money m2, Money &sum)
{
    long cents1 = m1.dollars * 100 + m1.cents;
    long cents2 = m2.dollars * 100 + m2.cents;

    sum.dollars = (cents1 + cents2) / 100;
    sum.cents = (cents1 + cents2) % 100;
}

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

// Q(2)
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
    long d, c;            // Step(1)
    Money m1, m2, m3, m4; // Step(1)

    // read_money(d, c); // Step 1 ve Step 2
    // m1 = Money(d, c); // Step 1 ve Step 2
    m1.Read();          // Q(3)
    m1.display_money(); // Step(1)

    // read_money(d, c); // Step 1 ve Step 2
    // m2 = Money(d, c); // Step 1 ve Step 2
    m2.Read();          // Q(3)
    m2.display_money(); // Step(1)

    // Sum
    // m3.add(m1, m2); // Step (1)
    // add(m1, m2, m3); // Step (2)
    m3 = add(m1, m2);                    // Q(1)
    m4 = subs(m1, m2);                   // Q(2)
    cout << "Total amount of money is "; // Step(1)
    m3.display_money();                  // Step(1)
    cout << "Substraction result is ";   // Q(2)
    m4.display_money();                  // Q(2)
    cout << endl;

    return 0;
}