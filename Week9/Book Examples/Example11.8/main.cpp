#include <iostream>
#include <cstdlib>

using namespace std;

const int MAX_LIST_SIZE = 50;

class TemperatureList
{
private:
    double list[MAX_LIST_SIZE];
    int size;

public:
    TemperatureList();
    void addTemperature(double temperature);
    bool full() const;
    friend ostream &operator<<(ostream &outs, const TemperatureList &theObject);
};

TemperatureList::TemperatureList() : size(0)
{
    // Left blank intentionally
}

int main()
{
    TemperatureList myTempList;

    for (int j = 0; j < 40; j++)
    {
        myTempList.addTemperature(j + 1);
    }

    cout << myTempList;

    return 0;
}

void TemperatureList::addTemperature(double temperature)
{
    if (full())
    {
        cout << "Error : Adding to a full list" << endl;
        exit(1);
    }
    else
    {
        list[size] = temperature;
        size = size + 1;
    }
}

bool TemperatureList::full() const
{
    return (size == MAX_LIST_SIZE);
}

ostream &operator<<(ostream &outs, const TemperatureList &theObject)
{
    for (int i = 0; i < theObject.size; i++)
    {
        outs << theObject.list[i] << " Celciues" << endl;
    }

    return outs;
}