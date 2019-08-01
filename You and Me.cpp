#include <iostream>
using namespace std;
int main()
{
    int me, you, avg;
    cin >> me >> you;
    cout << "I am " << me << endl
         << "You are " << you << endl
         << "We are around " << (me + you) / 2;
    return 0;
}