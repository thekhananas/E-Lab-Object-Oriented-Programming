#include <iostream>
using namespace std;
int main()
{
  int a,l=1;
  cin >>a;
  try{
  while(a>0)
  {  l=l*a;
    a--;}
      throw l;
  }
  catch(int msg)
  {
    cout <<"Factorial of a given Number is= "<<msg;
    return 0;
  }
 return 0;
}