#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int>myvector;
	int n, x;
	cin >> n;
	while(n--) {
		cin >> x;
		myvector.push_back(x);
	}
	cout << *min_element(myvector.begin(), myvector.end()) << " ";
	cout << *max_element(myvector.begin(), myvector.end());
}
