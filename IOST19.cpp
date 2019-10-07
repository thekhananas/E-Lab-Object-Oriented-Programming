#include <iostream>
using namespace std;
int main()
{
int n,i,k,x=20,c=1;
long double ans,s=1;
cin>>n;
for(i=1;i<=n;i++)
{
ans=s*c;
cout.width(n);
cout.setf(ios::fixed);
cout.precision(0);
cout<<ans<<"\n";
s=ans;
c++;
}
return 0;
}
