#include <iostream>
#include <iomanip>
using namespace std;
class Counselling
{
  public:
  int n,i;
  int no,m1,m2,m3,sum;
  char name[100];
  float cutof;
  friend class enggstudent;
  void input()
  {
      sum=0;
      cin>>no>>name>>m1>>m2>>m3;
      sum=sum+m1+m2+m3;
  }
};
    
class enggstudent
{
	public:
  		void input(Counselling& x)
  		{
     		x.sum=0;
      		cin>>x.no>>x.name>>x.m1>>x.m2>>x.m3;
      		x.sum=x.sum+x.m1+x.m2+x.m3;
        }
  		void cutoff(Counselling& x)
  		{
   			x.cutof=(float)x.sum/3;
  		}
  		void display(Counselling& x)
  		{
       		cout<<x.no<<" "<<x.name<<" "<<"("<<" "<<x.m1<<" "<<x.m2<<" "<<x.m3<<" "<<")"<<" "<<x.sum<<" "<<x.cutof<<endl;;
  		}
  			
};
      
      
int main() {
	class Counselling cou;
    class enggstudent ceg;
  	int t;
 	cin>>t;
  cout<<"Number Name Marks Total Cutoff"<<endl;
  while(t--)
  {
  	ceg.input(cou);
  	ceg.cutoff(cou);
  	ceg.display(cou);
  }
	return 0;
}