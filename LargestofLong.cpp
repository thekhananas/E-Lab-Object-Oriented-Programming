#include <iostream>
using namespace std;
template <class T>
T GetMax(T n1,T n2,T n3)
{
  if(n1>n2&&n1>n3)
   return n1;
  else if(n2>n1&&n2>n3)
    return n2;
  else
  return n3;
  
}
int main()
{
  long n1,n2,n3;
  cin>>n1>>n2>>n3;
  cout<<GetMax(n1,n2,n3);
 return 0;
}
