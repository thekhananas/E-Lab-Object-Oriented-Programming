#include <iostream>
using namespace std;
class C1{
public:
  int l,b;
  void getLB(){
  cin>>l>>b;
  }
  };
class C2:public C1{
public:
  void getP(){
  cout<<(2*(l+b));
  }
};

int main() {
	C2 o;
  o.getLB();
  o.getP();
	return 0;
}