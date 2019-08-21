#include <iostream>
using namespace std;
class Fraction
{
  public:
  int a,b,c,d,n,e;
  void operator+()
  {
    cin>>a>>b>>c>>d;
    n = ((a*d)+(c*b));
    e = (b*d);
  }
  void display()
  {
    cout<<n<<"/"<<e;
  }
};
int main() {
	Fraction obj;
  +obj;
  obj.display();
	return 0;
}