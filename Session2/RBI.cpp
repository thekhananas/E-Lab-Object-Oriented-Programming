#include <iostream>
#include <string.h>

using namespace std;

class Bank
{
  char name[40];
  char accounttype[5];
  int acc;
  int balance;

public:
  void initial()
  {
    cin >> name;
    cin >> acc;
    cin >> accounttype;
    cin >> balance;
  }
  void deposit()
  {
    int x;
    cin >> x;
    balance += x;
  }
  void withdraw()
  {
    int y;
    cin >> y;
    if (y > balance)
      cout << "Insufficient amount" << endl;
    else
      balance -= y;
  }
  void disp()
  {
    cout << "NAME=" << name << endl;
    cout << "ACCNO=" << acc << endl;
    cout << "TYPE=" << accounttype << endl;
    cout << "BALANCEAMOUNT=" << balance;
  }
};

int main()
{
  Bank obj;
  obj.initial();
  obj.deposit();
  obj.withdraw();
  obj.disp();
  return 0;
}