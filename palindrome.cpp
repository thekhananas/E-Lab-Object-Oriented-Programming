#include <iostream>
#include <bits/stdc++.h> 
#include<string.h>
using namespace std;
int main()
{
  string a;
  cin >> a;
  string str=a;
  int l=a.size();
  int v=0;
  try{
	reverse(str.begin(), str.end()); 
    if(str==a)
      throw " is a palindrome";
    else
      throw " is not a palindrome";
  }
  catch(const char* msg)
  {
    cout <<a<<msg;
    return 0;
  }
  
 return 0;
}