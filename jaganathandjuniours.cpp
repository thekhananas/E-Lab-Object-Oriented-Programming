#include <iostream>
using namespace std;
class Point
{
  public:
  int n;
  Point(int a)
  {
    n=a;
  }
  friend void operator++(Point &);
  void show()
  {
    cout<<n;
  }
};
 void operator++(Point &p)
 {
   ++p.n;
 }
int main() {
  int n;
  cin>>n;
	Point ob1(n);
  	++ob1;
  ob1.show();
	return 0;
}