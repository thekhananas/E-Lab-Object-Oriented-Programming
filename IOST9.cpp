#include <iostream>
#include <string.h>
using namespace std;
int main() {
 char a[500],b;
  cin.getline(a,30);
  b=strlen(a);
  cout<<"Your string is :";
  cout.write(a,b);
  cout<<endl;
  cout.write(a,10);
  cout<<endl;
  cout.write(a,b);
 return 0;
}
