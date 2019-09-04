#include <iostream>
#include <iomanip>
#include <exception>
using namespace std;
int main() {
int x,y=0;
  cin>>x>>y;
  try{
  if(y==0)
    cout<<"INVALID: Exception: 0";
    else 
      throw(0);
  }
  catch(int i){
   cout<<"VALID";
  }
	return 0;
}