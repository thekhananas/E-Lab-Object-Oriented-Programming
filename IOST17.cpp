#include <iostream>
using namespace std; 
int main () { 
  long int a;
   cin>>a;
  cout.setf(ios::hex,ios::basefield );
 cout<<"Hexadecimal is:" <<hex<<a<<"\n";
   cout.setf(ios::oct,ios::basefield );
  cout<<"Octal is:"<<oct<<a<<"\n";
   cout.setf(ios::dec,ios::basefield );
    cout<<"Decimal is:"<<dec<<a;
  return 0; 
}   
