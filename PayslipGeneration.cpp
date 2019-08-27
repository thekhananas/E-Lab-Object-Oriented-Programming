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
}