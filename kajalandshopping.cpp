#include<iostream>
using namespace std;

class Bill {
    int val1, val2;
public:
    void getamount() 
    { 
        cin >> val1>>val2;
    }
    friend float billavg(Bill ob);
};

float billavg(Bill ob)
{
    return float(ob.val1 + ob.val2) / 2;
}
int main() {  
    Bill obj;
    obj.getamount();
    cout << "Average amount spent:" << billavg(obj);
   
}