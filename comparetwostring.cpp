#include <iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
int main() {
  	char string1[100],string2[100];
  	cin>>string1;
  	cin>>string2;
  	try
    {		
      	if(isdigit(string1[0]))
          	throw 1;
      	if(strcmp(string1,string2)==0)
      		cout<<string1<<" is "<<string2;
      	else
      		cout<<string1<<" is not "<<string2;
    }
	catch(int i)
    {
    	cout<<"Invalid input. Try again:";
    }
	return 0;
}