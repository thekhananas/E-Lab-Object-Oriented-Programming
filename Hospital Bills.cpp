#include <iostream>
#include <cmath>
using namespace std;
class Hospital{ 
 public:
float bill(float medicines,float days)
  { 
     float sum = medicines*days; 
     return sum; 
  }
int bill(int room, int days)
  { 
     int sum = room*days;
        float sum = medicines*days; 
     return sum; 
  }
int bill(int room, int days)
  { 
     int sum = room*days;
     return sum; 
  }
}; 

int main() {
  Hospital ob;
float a,b;
cin>>a>>b;
 float sum1=ob.bill(a,b);
  cout<<sum1<<endl;
cin>>a>>b;
float sum2=ob.bill(a,b);
    cout<<sum2<<endl;
 return 0;
}
    