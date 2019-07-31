//only test case 4 not working
#include <iostream>

using namespace std;

class Bank
{
    char name[20];
    char accounttype[20];
    int acc;
    int balance, depost, debit;

public:
    void intial()
    {
        cin >> name >> acc >> accounttype >> balance;
    }

    void deposit()
    {
        cin >> depost;
    }

    void disp()
    {
        cout << "NAME=" << name << endl
             << "ACCNO=" << acc << endl
             << "TYPE=" << accounttype << endl;
    }

    void withdraw()
    {
        cin >> debit;
        if (debit < balance + depost)
        {
            balance = balance + depost - debit;
            cout << "BALANCEAMOUNT=" << balance << endl;
        }
        else if (debit > balance + depost)
        {
            cout << "Insufficient amount" << endl;
        }
    }
};
int main()
{
    Bank obj;
    obj.intial();
    obj.deposit();
    obj.disp();
    obj.withdraw();
    return 0;
}