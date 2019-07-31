#include <iostream>
using namespace std;

class Date
{
    int day, month, year;

public:
    Date()
    {
        day = 1;
        month = 1;
        year = 2000;
    }
    void in()
    {
        cin >> day >> month >> year;
    }
    void out()
    {
        switch (month)
        {
        case 1:
            cout << "January";
            break;
        case 2:
            cout << "Feburary";
            break;
        case 3:
            cout << "March";
            break;
        case 4:
            cout << "April";
            break;
        case 5:
            cout << "May";
            break;
        case 6:
            cout << "June";
            break;
        case 7:
            cout << "July";
            break;
        case 8:
            cout << "August";
            break;
        case 9:
            cout << "September";
            break;
        case 10:
            cout << "October";
            break;
        case 11:
            cout << "November";
            break;
        case 12:
            cout << "December";
            break;
        }
        cout << " " << day << " " << year;
    }
};

int main()
{
    Date d1;
    d1.in();
    d1.out();
    return 0;
}