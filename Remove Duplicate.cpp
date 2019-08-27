//author aaryan
#include <bits/stdc++.h>
#include <list>
using namespace std;
void showlist(list<int> demolist)
{
    list<int>::iterator it;
    for (it = demolist.begin(); it != demolist.end(); ++it)
        cout << *it << " ";
    //cout << '\n';
}
int main()
{
    list<int> demolist;
    int n, j, i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> j;
        demolist.push_back(j);
    }
    demolist.unique();
    demolist.sort();
    showlist(demolist);
    return 0;
}