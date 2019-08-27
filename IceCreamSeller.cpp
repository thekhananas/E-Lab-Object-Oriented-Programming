#include <iostream>
using namespace std;
class matrix
{
    int a, b, c, d;
    float e, f, z, r;

public:
    void get()
    {
        cin >> a >> b >> c >> d >> e >> f;
    }
    matrix operator*()
    {
        float x, y, z, p, q, r;
        x = a * e;
        y = b * f;
        p = c * e;
        q = d * f;
        z = x + y;
        r = p + q;
        cout << z << endl
             << r;
    }
    void put()
    {
        //put the data
    }
};
int main()
{
    matrix obj;
    obj.get();
    *obj;
    obj.put();
    return 0;
}
