#include <iostream>
using namespace std;
class A{
public:
  int x;
};
class B:public A
{
public:
void getvalue()
   {
     cin>>x;
   }
};
class C{
  public:
  int y;
  void getvalue2(){
  cin>>y;
  } 
}; 
class D:public B,public C{
  public:
  int sum;
  void getsum(){
    sum=x+y;
  cout<<"Sum= "<<sum;
  }
};
int main() {
class D q;
q.getvalue();
q.getvalue2();
  q.getsum();
	return 0;
}