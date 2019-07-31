#include <iostream>
using namespace std;
class Complex
{
public:
    int a, b, d, e;
    char c = 'i';

public:
    void input()
    {
        cin >> a >> b >> d >> e;
    }
    void addcomplex()
    {
        cout << a << "+" << b << c << endl;
        cout << d << "+" << e << c << endl;
    }
    void displaycomplex()
    {
        cout << (a + d) << "+" << (b + e) << c;
    }
};
int main()
{
    Complex obj;
    obj.input();
    obj.addcomplex();
    obj.displaycomplex();
    return 0;
}