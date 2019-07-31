 #include <iostream>
using namespace std;
class Library
{
  public :string name;
  int r,bc,c=0;
  
  Library(int a,string s,int b)
  {
    name=s;
    r=a;
    bc=b;
  }
  
  void show()
  {
    cout<<"Roll No:"<<r<<endl<<"Name of the Student:"<<name<<endl<<"Code of Book Accessed:"<<bc<<endl;
  }
  
  void count()
  {
    c++;
  }
    
};

int main()
{
  int s,p,q,r;
  string n,m;
  cin>>s>>n>>p>>q>>m>>r;
  
  Library lib1(s,n,p);
  lib1.show();
  Library lib2(q,m,r);
  lib2.show();
	return 0;
}

