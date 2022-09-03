#include <iostream>
using namespace std;

class DayofYear
{
public:
    // friend function declaration
    friend bool equal(DayofYear date1, DayofYear date2);

    // Constructor Functions
    DayofYear(int theMonth, int theDay);
    DayofYear();
    // Accessor Functions
    int getMonth();
    int getDay();

    // Mutator Functions
    void input();

private:
    int day;
    int month;
};

bool equal(DayofYear date1, DayofYear date2);

int main()
{
    DayofYear myBirthday;
    myBirthday.input();

    DayofYear yourBirthDay{7, 2};

    if (equal(myBirthday, yourBirthDay))
    {
        cout << "Both days are equal!";
    }
    else
    {
        cout << "Those are different days";
    }

    return 0;
}

void DayofYear::input()
{
    cout << "Please enter day : ";
    cin >> day;
    cout << "Please enter month :";
    cin >> month;
}

DayofYear::DayofYear(int theMonth, int theDay)
{
    day = theDay;
    month = theMonth;
}

DayofYear::DayofYear()
{
    day = 1;
    month = 1;
}

bool equal(DayofYear date1, DayofYear date2)
{
    // return (date1.getDay() == date2.getDay()) && (date1.getMonth() == date2.getMonth());
    return (date1.day == date2.day) && (date1.month == date2.month);
}

int DayofYear::getDay()
{
    return day;
}

int DayofYear::getMonth()
{
    return month;
}