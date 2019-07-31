#include<iostream>
using namespace std;
 
class increment {
    public:
    double x, y,z;
    void getx()
    {
        cin>>x>>y>>z;
    }
    void display()
    {
        cout<<x<<" "<<y<<" "<<z;
    }
    void operator++();
};
 
void increment::operator ++()
{
    x=++x;
    y=++y;
    z=++z;
}
 
int main()
{
    increment obj;
    obj.getx();

    ++obj;

    obj.display();
    return 0;
}