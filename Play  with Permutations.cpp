#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  string s;
  cin >> s;

  do
  {
    cout << s << '\n';
  } while (next_permutation(s.begin(), s.end()));
  return 0;
}