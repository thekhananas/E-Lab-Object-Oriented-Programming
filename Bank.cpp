#include <iostream>
#include<string.h>
using namespace std;
class Bank
{
  public:
  float rate=12;
  int years=3;
  float interest;
 };
class Customer
{
  public:
string customername;
  float customerid;
  long accountnumber;
  long balance;
  
};
class Account:public Customer,public Bank
{
public:
void get()
{
cin>>customername>>customerid>>accountnumber>>balance;
}
void put()
{
cout<<"Customer Name="<<customername<<endl;
cout<<"Customer Id="<<customerid<<endl;
cout<<"Account No="<<accountnumber<<endl;
cout<<"Account Balance="<<balance<<endl;
cout<<"Interest="<<interest;
}
void calcint()
{
interest= balance*rate*years/100;
}
};
int main()
{
Account a;
  a.get();
  a.calcint();
  a.put();
  return 0;
}