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
Money operator +(Money o) {
Money res(0,0);
res.paise=paise+o.paise;
res.rupees=res.paise/100;
res.paise=res.paise%100;
res.rupees=res.rupees+rupees+o.rupees;
return res;
}
Money operator -(Money o) {
Money res(0,0);
res.paise=paise-o.paise;
res.rupees=rupees-o.rupees;
return res;
}
void print()
{
    cout<<"Rs="<<rupees<<" and "<<paise<<" Paise\n";
}
};
int main()
{
    Money ob(0,0),ob1(0,0),ob2(0,0),ob3(0,0);
    cin>>ob.rupees;
    cin>>ob.paise;
    cin>>ob1.rupees;
    cin>>ob1.paise;
    cin>>ob2.rupees;
    cin>>ob2.paise;
    ob3=ob1-ob2;
    ob3=ob+ob3;
    ob3.print();
    return 0;
}
