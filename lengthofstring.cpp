#include <iostream>
#include<string.h>
using namespace std;
int main()
{
  string a;
  cin >> a;
  try{
  int l=a.size();
      throw l;
  }
  catch(int length)
  {
    if(length>1)
    {
     cout <<"Length of the string is: "<<length;
     return 0;
    }
    else 
      cout<<"Invalid input";
  }
 return 0;
}