//last two testcases not working
#include <iostream>
using namespace std;

class address
{
public:
    int hno;
    char cty[20], state[20];

public:
    void getad()
    {
        cin >> hno >> cty >> state;
    }

    void putad()
    {
        cout << "House No=" << hno << '\n'
             << "City=" << cty << '\n'
             << "State=" << state << '\n';
    }
};

class room
{
public:
    int l, b, h;

public:
    void getroom()
    {
        cin >> l >> b >> h;
    }

    void putroom()
    {
        cout << "Length=" << l << '\n'
             << "Breadth=" << b << '\n'
             << "Height=" << h << '\n';
    }
};

class house
{
public:
    char hname[20];
    class address a;
    class room r[10];
    int size;

public:
    void input()
    {
        cin >> hname;
        a.getad();
        cin >> size;
        for (int i = 0; i < size; i++)
        {
            // cout<<"House Details"<<i+1<<'\n';
            r[i].getroom();
        }
    }

    void display()
    {
        cout << "House name=" << hname << '\n';
        a.putad();

        for (int i = 0; i < size; i++)
        {
            cout << "Details of Room " << i + 1 << '\n';
            r[i].putroom();
        }
    }
};

int main()
{
    house x;
    x.input();
    x.display();
    return 0;
}