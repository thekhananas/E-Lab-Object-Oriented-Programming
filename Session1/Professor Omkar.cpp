#include <iostream>
using namespace std;
int main()
{
    float M, ini, fin;
    cin >> M >> ini >> fin;
    float Q = M * (fin - ini) * 4184;
    cout << "The energy needed is " << Q;
    return 0;
}