#include <iostream>
using namespace std;
class Bank
{
public:
    string name;
    int id;
    void get()
    {
        cin >> name >> id;
    }
};
class Customer
{
public:
    int acNo, Bal;
    void getData()
    {
        cin >> acNo >> Bal;
    }
};
class Account:public Customer,public Bank
{
public:
    int interest;
    void put()
    {
        interest = 12 * 3 * Bal;
        interest /= 100;
        cout << "Customer Name=" << name << endl;
        cout << "Customer Id=" << id << endl;
        cout << "Account No=" << acNo << endl;
        cout << "Account Balance=" << Bal << endl;
        cout << "Interest=" << interest;
    }
};
int main()
{
    Account obj;
    obj.get();
    obj.getData();
    obj.put();
    return 0;
}
