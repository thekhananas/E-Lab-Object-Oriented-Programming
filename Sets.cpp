#include <iostream>
#include <set>
using namespace std;
int main() {
    int n;
    set<int>s;
    cin >> n;
    while(n--){
       
        int x,y;
        cin >> y >> x;
        if(y == 1){
            s.insert(x);
        } else if(y == 2){
            s.erase(x);
        } else {
            auto itr = s.find(x);
            if(distance(itr,s.end()) == 0){
                cout << "No" << endl;
            } else {
                cout << "Yes" << endl;
            }
        }
    }
    return 0;
}
