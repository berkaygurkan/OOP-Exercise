/*Example 2 - Operator Overloading*/
#include <iostream>
#include <cstdlib>
using namespace std;

/* Operators such as
+ - = % - * < >
++ -- ==
>> << - next example
are actually function with a diffrenet syntax and we can override.
*/

/* declaration
friend return_data_type operator operator_itself(arg1,arg2...)
*/
/* definition
return_data_type operator operator_itself(arg1,arg2...)
*/

/*This program adds two different peoples money*/
class Money
{
private:
    long dollars;
    long cents;

public:
    // Constructor Functions
    Money();               // Step(1)
    Money(long d, long c); // Step(1)

    // Mutator Function
    friend Money add(Money m1, Money m2); // Step(1)
    void Read();

    friend Money operator+(Money m1, Money m2); // Step(2)
    friend bool operator<(Money m1, Money m2);  // Q(1)
    friend bool operator>(Money m1, Money m2);  // Q(1)
    friend bool operator==(Money m1, Money m2); // Q(1)

    friend double operator%(Money income, Money expense); // Q(1)
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

void Money::Read() // Step(1)
{
    cout << "Enter dollar amonunt :";
    cin >> dollars;
    cout << "Enter cent amonunt :";
    cin >> cents;
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

Money add(Money m1, Money m2) // Step(1)
{
    Money temp;
    long cents1 = m1.dollars * 100 + m1.cents;
    long cents2 = m2.dollars * 100 + m2.cents;

    temp.dollars = (cents1 + cents2) / 100;
    temp.cents = (cents1 + cents2) % 100;

    return temp;
}

Money operator+(Money m1, Money m2) // Step(2)
{
    Money temp;
    long cents1 = m1.dollars * 100 + m1.cents;
    long cents2 = m2.dollars * 100 + m2.cents;

    temp.dollars = (cents1 + cents2) / 100;
    temp.cents = (cents1 + cents2) % 100;

    return temp;
}

bool operator<(Money m1, Money m2) // Q(1)
{
    long allCents1 = m1.dollars * 100 + m1.cents;
    long allCents2 = m2.dollars * 100 + m2.cents;

    return (allCents1 < allCents2);
}
bool operator>(Money m1, Money m2) // Q(1)
{
    long allCents1 = m1.dollars * 100 + m1.cents;
    long allCents2 = m2.dollars * 100 + m2.cents;

    return (allCents1 > allCents2);
}

bool operator==(Money m1, Money m2) // Q(1)
{
    long allCents1 = m1.dollars * 100 + m1.cents;
    long allCents2 = m2.dollars * 100 + m2.cents;

    return (allCents1 == allCents2);
}

double operator%(Money income, Money expense) // Q(1)
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
    Money m1, m2, m3, m4; // Step(1)

    cout << "Income" << endl;
    m1.Read();          // Step(1)
    m1.display_money(); // Step(1)

    cout << "Expense" << endl;
    m2.Read();          // Step(2)
    m2.display_money(); // Step(2)

    // m3 = add(m1, m2);               // Step(1)
    m3 = m1 + m2; // Step(2)

    cout << "Operation result is : " << m1 % m2 << " cents"; // Q(1)

    return 0;
}