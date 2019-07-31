#include <iostream>
using namespace std;
template <class T>
T displayresult(T x,T y){ 
  cout<<x<<endl<<y<<endl<<x/y;
}
int main()
{
  float x,y;
  cin>>x>>y;
  displayresult(x,y);
 return 0;
}