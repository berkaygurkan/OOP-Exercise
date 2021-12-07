#include <iostream>
#include <cstdlib>
using namespace std;

// Operator overloading

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
    friend Money add(Money m1, Money m2);
    friend Money subs(Money m1, Money m2);
    void Read();
    friend Money operator+(Money m1, Money m2);
    friend bool operator<(Money m1, Money m2);
    friend bool operator>(Money m1, Money m2);
    friend bool operator==(Money m1, Money m2);

    friend double operator%(Money income, Money expense);
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

Money add(Money m1, Money m2)
{
    Money temp;
    long cents1 = m1.dollars * 100 + m1.cents;
    long cents2 = m2.dollars * 100 + m2.cents;

    temp.dollars = (cents1 + cents2) / 100;
    temp.cents = (cents1 + cents2) % 100;

    return temp;
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

bool operator<(Money m1, Money m2)
{
    long allCents1 = m1.dollars * 100 + m1.cents;
    long allCents2 = m2.dollars * 100 + m2.cents;

    return (allCents1 < allCents2);
}
bool operator>(Money m1, Money m2)
{
    long allCents1 = m1.dollars * 100 + m1.cents;
    long allCents2 = m2.dollars * 100 + m2.cents;

    return (allCents1 > allCents2);
}

bool operator==(Money m1, Money m2)
{
    long allCents1 = m1.dollars * 100 + m1.cents;
    long allCents2 = m2.dollars * 100 + m2.cents;

    return (allCents1 == allCents2);
}

double operator%(Money income, Money expense)
{
    long incomeCents = income.dollars * 100 + income.cents;
    long expenseCents = expense.dollars * 100 + expense.cents;

    if (income > expense)
    {
        return (incomeCents - expenseCents) * 5 / 100;
    }
    else if (income < expense)
    {
        return (incomeCents - expenseCents) * 2 / 100;
    }
    else if (incomeCents == expenseCents)
    {
        return 0.0;
    }
    return -1;
}

int main()
{
    long d, c;
    Money m1, m2, m3, m4;

    m1.Read();
    m1.display_money();

    m2.Read();
    m2.display_money();

    // m3 = add(m1, m2);               // Step(1)
    m3 = m1 + m2;
    m4 = subs(m1, m2);
    cout << "Total amount of money is ";
    m3.display_money();
    cout << "First one minus second one is ";
    m4.display_money();
    cout << endl;

    cout << "Operation result is : " << m1 % m2 << " cents";

    return 0;
}