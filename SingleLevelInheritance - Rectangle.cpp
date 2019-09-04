#include <iostream>
using namespace std;
class A
{
  public:
  int x;
  void getxval();
};
  void A :: getxval()
  {
    cin>>x;
  }
class B
{ 
  public:
  int y;
  void getyval()
  {
    cin>>y;
  }
};
class C:public A,public B
{
   public:
   int su=0,mult;
   void sum();
   void mul();
   };
   void C :: sum()
   {
     su+=x+y;
     cout<<"Sum = "<<su;
   }
   void C::mul()
   {
     mult=x*y;
     cout<<"\nProduct="<<mult;
   }
int main() {
    C obj;
    obj.getxval();
    obj.getyval();
	obj.sum();
    obj.mul();
	return 0;
}