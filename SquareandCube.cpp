#include <iostream>
using namespace std;
class Number
  {
  public:
  int a;
  void getNumber()
    {
    cin>>a;
    }
  };
class Square:public Number
{
public:
void getSquare()
{
cout<<a*a<<endl;
}
};
class Cube:public Number
{
public:
void getCube()
{
cout<<(a*a*a);
}
};

int main() {
	
  Square objS;
  objS.getNumber();
  objS.getSquare();
  Cube objC;
  objC.getNumber();
  objC.getCube();
	return 0;
}
