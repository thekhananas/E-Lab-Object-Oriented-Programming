#include <iostream>
#include<cstring>
#include<locale>
using namespace std;
int main()
{
  string a;
  cin >> a;
  int l=a.size();
  int v=0;
  try{
  for(int i=0;i<l;i++)
  {
    if(isdigit(a[i])){
      throw "Exception Caught Numeric Value";}
    a[i]=toupper(a[i]);
    char e=a[i];
    if(e=='A'||e=='E'||e=='I'||e=='O'||e=='U')
      v++;
  }
  }
  catch(const char* msg)
  {
    cout << msg;return 0;
  }
  cout <<"Vowels="<<v<<endl<<"Consonants="<<l-v;
  
 return 0;
}