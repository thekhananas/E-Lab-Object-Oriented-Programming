#include <iostream>
using namespace std;
class parent
{
  public:
  virtual void difference(int a, int b)=0;
};
class child:public parent
{
public:
void difference(int a,int b)
{
cout<<"Difference="<<a-b;
}
};
int main() {
	parent *p;
  	child c;
	p=&c;
  int n;
  int a,b;
  cin>>a>>b;
  p->difference(a,b);
	return 0;
}