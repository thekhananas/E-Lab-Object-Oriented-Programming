#include <iostream>
using namespace std;
class Cricket
{
public:
    string name;
    int r, bc, c = 0;

    Cricket(int a, string s, int b)
    {
        name = s;
        r = a;
        bc = b;
    }

    void show()
    {
        cout << "Jersey Num:" << r << endl
             << "Name of the Player:" << name << endl
             << "No of Innings Played:" << bc << endl;
    }

    void count()
    {
        c++;
    }
};

int main()
{
    int s, p, q, r;
    string n, m;
    cin >> s >> n >> p >> q >> m >> r;

    Cricket lib1(s, n, p);
    lib1.show();
    Cricket lib2(q, m, r);
    lib2.show();
    return 0;
}