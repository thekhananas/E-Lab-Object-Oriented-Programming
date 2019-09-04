#include <iostream>
using namespace std;
class Super
{
  public:
   virtual void nSum()=0; 
};
class Sub:public Super
{ public:
  int n,y,z;
  void read(){
  cin>>n;
  }
 void nSum(){
  y=n*(n+1);
  z=y/2;
  cout<<z;
 }
};
int main() {
  class Sub sb;
  sb.read();
  sb.nSum();
	
	return 0;
}