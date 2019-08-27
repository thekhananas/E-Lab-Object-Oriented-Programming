#include <iostream>
using namespace std;
template <class T>
void Swap(T &x, T &y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    string x, y;
    cin >> x >> y;
    Swap(x, y);
    cout << x << " " << y;
    return 0;
}