//author aaryan

#include <iostream>
#include<ctype.h>
using namespace std;
int main() {
	float n;
  	cin>>n;
  	int a;
  	a=n;
  	try
    {
        if(a%10==0)
        {
          if(!isdigit(n))
            throw 1;
        }
      	if(a==n)
          	cout<<"Integer";
      else
      		cout<<"Floting";
    }
  	catch(int i)
    {
    	cout<<"Invalid input";
    }
	return 0;
}