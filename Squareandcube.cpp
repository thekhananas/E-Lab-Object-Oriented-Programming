#include <iostream>
using namespace std;
class Number {
public:
  int n;
  void getNumber() {
cin>>n;
}
};
  class Square:public Number {
   public:
    void getSquare() {
   cout<<(n*n)<<endl;
   }
   };
    class Cube:public Number {
    public:
      void getCube() {
    cout<<((n*n)*n)<<endl;
    }
    };
  

int main() {
	Square objS ;
  objS.getNumber();
  objS.getSquare();
  Cube objC ;
  objC.getNumber();
  objC.getCube();
	return 0;
}