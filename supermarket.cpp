#include <iostream>
using namespace std;
class consumer
{
  public:
  virtual void getdata()=0;
  virtual void display()=0;
};
class transaction:public consumer
{
public:
string a;
int b;
long int c;
int d;
int e;
void getdata(){
cin>>a>>b>>c>>d>>e;
}
void display(){
cout<<"Name : "<<a<<endl;
cout<<"Code : "<<b<<endl;
cout<<"Telephone : "<<c<<endl;
cout<<"Quantity : "<<d<<endl;
cout<<"Price : "<<e<<endl;
cout<<"Total Price : "<<d*e;
}
};

int main()
{
transaction t;
  t.getdata();
  t.display();
 return 0;
}