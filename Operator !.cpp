#include <iostream>
#include<cstring>
using namespace std;
class mystring
{
  char str[100];
  public:
  void operator !();
  void operator ==(mystring&)
  {
    cout<<str;
  }
  void acccept_string()
  {
    cin>>str;
  }
};
void mystring::operator!()
{
  int in = strlen(str);
  for(int i=0;i<in;i++)
  {
    if(str[i]>='a'&&str[i]<='z')
      str[i]=str[i]-32;
    else if(str[i]>='A'&&str[i]<='z')
      str[i]=str[i]+32;
  }
}

int main()
{
mystring s1,s2;
  s1.acccept_string();
  !s1;
  s1.operator == (s2);
  
 return 0;
}