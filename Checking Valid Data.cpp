//author aaryan
#include <iostream> 
using namespace std; 

int main() 
{ 
int x;
  cin>>x;
try { 
	if (x > 0 && x<=100) 
	{ 
		throw x; 
	} 
  else
       cout << "Invalid Mark";
} 
catch (int x ) 
{ 
	cout << "Valid Mark"; 
}
catch (...)  
{ 
   cout << "Invalid Mark";
} 

return 0; 
} 
