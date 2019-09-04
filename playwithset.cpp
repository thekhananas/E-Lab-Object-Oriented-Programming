#include <iostream>
#include<set>
using namespace std;
int main()
{
  set<int> s;
  int n;
  cin>>n;
  for (int i=0;i<n;i++)
  {
  int a;
    cin>>a;
    s.insert(a);
  }
  int m;
  cin>>m;
auto a=s.find(m);
  if (a==s.end())
    cout<<"No Element Found"<<endl;
  else
    cout<<"Element "<<*a<<" found in the set"<<endl;
 for (int i:s)
   cout<<i<<" ";
  cout<<endl;
  cout<<"Size="<<s.size();
 return 0;
}