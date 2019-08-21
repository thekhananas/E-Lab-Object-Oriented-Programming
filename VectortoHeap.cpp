#include<iostream> 
#include<algorithm> 
using namespace std; 
int main() 
{ 
      int n,i;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++)
    cin>>a[i];
    vector<int> myvector; 
      for(i=1;i<=n;i++)
   myvector.push_back(a[i-1]);
  
    make_heap(myvector.begin(),myvector.end()); 
      

    cout<<myvector.front()<<endl; 
    return 0; 
} 