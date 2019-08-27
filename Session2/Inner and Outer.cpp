#include <iostream>
using namespace std;

class outer
{
public:
    int x, y;

    void get()
    {
        cin >> x;
    }
    class inner
    {
    public:
        int y;
        void get()
        {
            cin >> y;
        }
        void sum()
        {
            outer o;
            o.get();
            cout << (o.x + y);
        }
    };
};

int main()
{
    outer::inner i;
    i.get();
    i.sum();
    return 0;
}
