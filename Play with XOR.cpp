#include <iostream>
#include <cstdio>
#include <algorithm>
void scanint(int &);
#define gc getchar_unlocked
using namespace std;
int main()
{
    int t, n, b, count;
    scanint(t);
    while (t--)
    {
        scanint(n);
        count = 0;
        for (int i = 0; i < n; i++)
        {
            scanint(b);
            if (b == 1)
                ++count;
        }
        if (count % 2 == 1)
            printf("%d\n", count);
        else
            printf("%d\n", (n - count));
    }
    return 0;
}
void scanint(int &m)
{
    m = 0;

    register int c = gc();
    for (; c < 48 || c > 57; c = gc())
        ;
    for (; c > 47 && c < 58; c = gc())
    {
        m = (m << 3) + (m << 1) + (c - 48);
    }
}
