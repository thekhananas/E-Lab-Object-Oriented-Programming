<<<<<<< HEAD
#include <iostream>
using namespace std;

class C1
{
public:
    int l;
    int b;

    C1()
    {
        cin >> l >> b;
    }
};

class C2 : public C1
{
public:
    void peri()
    {
        cout << 2 * (l + b);
    }
};
int main()
{
    C2 obj;
    obj.peri();

    return 0;
=======
#include <iostream>
using namespace std;
class C1{
public:
  int l,b;
  void getLB(){
  cin>>l>>b;
  }
  };
class C2:public C1{
public:
  void getP(){
  cout<<(2*(l+b));
  }
};

int main() {
	C2 o;
  o.getLB();
  o.getP();
	return 0;
>>>>>>> 6c587fe6e2dc042f6a0482e1b1be974a11f09bbc
}