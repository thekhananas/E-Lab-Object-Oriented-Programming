#include <iostream>
#include<string.h>
using namespace std;
int main()
{ string str;
  int sum;
  cin >>str;
 if(!isdigit(str[0]))
 {
   cout<<"Invalid input";
   return 0;
 }
    int x =stoi(str);
 int a=x;
    while(a>0)
  {  
  try
  {
    if(a%4==0)
    	throw 1;
  }
  catch(int b)
  {
    sum=sum+b;
  }
      a--;
    }
  cout<<"Number of exceptions: "<<sum-1;
 return 0;
}