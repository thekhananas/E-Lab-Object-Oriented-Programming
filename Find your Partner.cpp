
#include <iostream>
using namespace std;

class partner
{
public:
    void findpartner()
    {
        int n;
        cin >> n;
        if (n % 8 == 0)
        {
            cout << n - 1 << "SU";
        }
        else if (n % 8 == 7)
        {
            cout << n + 1 << "SL" << endl;
        }
        else if (n % 8 == 6)
        {
            cout << n - 3 << "UB" << endl;
        }
        else if (n % 8 == 3)
        {
            cout << n + 3 << "UB" << endl;
        }
        else if (n % 8 == 5)
        {
            cout << n - 3 << "MB" << endl;
        }
        else if (n % 8 == 2)
        {
            cout << n + 3 << "MB" << endl;
        }
        else if (n % 8 == 4)
        {
            cout << n - 3 << "LB" << endl;
        }
        else if (n % 8 == 1)
        {
            cout << n + 3 << "LB" << endl;
        }
    }
};

int main()
{
    int t;
    cin >> t;
    partner objname;
    while (t--)
    {
        objname.findpartner();
    }
    return 0;
}
