#include <iostream>
#include<cmath>
using namespace std;
class Money
{
public:
   int rupees;
   int paise;
   Money(int r, int p)
   {
       rupees=r;
       paise=p;
   }
Money operator +(Money b) {
Money res(0,0);
res.paise=paise+b.paise;
res.rupees=res.paise/100;
res.paise=res.paise%100;
res.rupees=res.rupees+rupees+b.rupees;
//cout<<res.rupees<<res.paise;
return res;
}
Money operator -(Money b) {
Money res(0,0);
res.paise=paise-b.paise;
res.rupees=rupees-b.rupees;
return res;
}
void print()
{
   // cout<<"Savings is:";
    cout<<"Rs="<<rupees<<" and "<<paise<<" Paise\n";
}
};
int main()
{
    Money ob(0,0),ob1(0,0),ob2(0,0),ob3(0,0);
    //cout<<"Enter the initial savings:\nRs:";
    cin>>ob.rupees;
    //cout<<"Paise:";
    cin>>ob.paise;
    //cout<<"Enter the salary:\nRs:";
    cin>>ob1.rupees;
    //cout<<"Paise:";
    cin>>ob1.paise;
    //cout<<"Enter the expenditure for this month:\nRs:";
    cin>>ob2.rupees;
    //cout<<"Paise:";
    cin>>ob2.paise;
    ob3=ob1-ob2;
    //ob3.print();
    ob3=ob+ob3;
    ob3.print();
    return 0;
}
