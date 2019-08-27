#include <iostream>
using namespace std;
class Area
{
public:
  int getArea(int length, int berth)
  {
    cout << (length * berth) << endl;
    return 0;
  }
};
class Perimeter
{
public:
  int getPerimeter(int length, int berth)
  {
    cout << ((length + berth) * 2) << endl;
    return 0;
  }
};
class Rectangle : public Area, public Perimeter
{
public:
};
int main()
{
  Rectangle rt;
  int a, b;
  cin >> a >> b;
  rt.getArea(a, b);
  rt.getPerimeter(a, b);
  return 0;
}