#include<iostream>
using namespace std;
class data {
    public:
    double x, y;
  double a,b;
    void setdata()
    {
        cin>>x>>y;
      cin>>a>>b;
    }
    void display1()
    {
        cout<<x<<" "<<y;
    }
  void display2()
  {
    cout<<a<<" "<<b;
  }
 
data operator*()
{
    x=-x;
    y=-y;
  a=-a;
  b=-b;
}
 };
int main()
{
    data ob1;
    ob1.setdata();
    *ob1;  
    ob1.display1();
   cout<<"\n";
  ob1.display2();
    return 0;
}