#include <iostream>
#include<iomanip>
using namespace std;
int main() {
  char a[100];
  cin>>a;
  cout<<"0123456789"<<endl;
	cout<<setw(10);
  cout<<a<<endl;
  cout<<setw(10);
  cout<<setfill('0');
  cout<<a<<endl;
   cout<<setw(10);
  cout<<setfill('.');
  cout<<a;
  
 
  
 
	return 0;
}