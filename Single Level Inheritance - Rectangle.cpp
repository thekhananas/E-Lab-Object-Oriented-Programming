#include <iostream> // programm is not working
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
class C : public A, public B
{
public:
  int sum, mul;
  void sum()
  {
    sumx + y;
    cout << "Sum = " << sum;
  }
  void mul()
  {
    mul = x * y;
    cout << "Product=" << mul;
  }
} obj;
int main()
{
  obj.sum();
  obj.mul();
  return 0;
}