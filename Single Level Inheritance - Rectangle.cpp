#include <iostream>
using namespace std;

class A
{
public:
  int x;
  void getxval()
  {
    cin >> x;
  }
};

class B
{
public:
  int y;
  void getyval()
  {
    cin >> y;
  }
};

class C:public A,public B
{
public:
 int s, m;
  C ()
  {
  getxval();
  getyval();
  }
  void sum()
  {
    s = x + y;
    cout << "Sum = " <<s<<endl;
  }
  void mul()
  {
    m = x * y;
    cout << "Product=" <<m;
  }
};

int main()
{
  C obj;
  obj.sum();
  obj.mul();
  return 0;
}
