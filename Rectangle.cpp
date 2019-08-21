#include <iostream>
using namespace std;
class Area
{
  public:
  int getArea(int length,int berth)
  {
    cout<<(length*berth)<<endl;
  }
};
class Perimeter()
{
  public:
  int getPerimeter(int length,int berth)
  {
    cout<<(2*(length+berth))<<endl;
  }
};
class Rectangle: public Area,public Perimeter
{
   
int main() {
	cout<<"Hello World";
	return 0;
}