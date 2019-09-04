#include <iostream>
using namespace std;
class C1{
 public:
  int x,y;
   void getperi()
 {
   cin>>x>>y;   
 }
};
class C2:public C1
{
  public:
  int z;
  void display(){
   z=(x+y)*2;
   cout<<z;
  }
};
int main() {
  class C2 q;
  q.getperi();
  q.display();
	
	return 0;
}