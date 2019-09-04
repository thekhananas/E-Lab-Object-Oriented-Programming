#include <iostream>
using namespace std;
class vector
{
  public:
  int x,y,z;
   vector operator+(vector b){}
};
int main()
{
int a,b,c,d,e,f;
  cin >> a >> b >> c >> d >> e >> f;
  cout <<"Sum="<<a+d<<"i+"<<b+e<<"j+"<<c+f<<"z";
 return 0;
}