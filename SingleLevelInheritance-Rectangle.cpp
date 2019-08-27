#include <iostream>
using namespace std;
class A {
 public:
  int x;
void getxval(){
cin>>x;
}
};
class B {
 public:
  int y;
void getyval(){
cin>>y;
}
};
class C:public A,public B{
public:
  void sum(){
int sum = x + y;
    cout<<"Sum = "<<sum<<endl;
}
  void mul(){
int mul = x * y;
    cout<<"Product="<<mul<<endl;
  }
};
int main() {
	C obj;
  obj.getxval();
  obj.getyval();
  obj.sum();
  obj.mul();
	return 0;
}