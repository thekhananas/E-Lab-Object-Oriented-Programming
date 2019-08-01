#include <iostream>
using namespace std;
class Building
{
private:
    int length;
    int width;
    int ratePerSqFeet;

public:
    void initializeData(int a, int b, int c)
    {
        length = a;
        width = b;
        ratePerSqFeet = c;
    }

public:
    int getLength()
    {
        return length;
    }

public:
    int getWidth()
    {
        return width;
    }

public:
    int getRatePerSqFeet()
    {
        return ratePerSqFeet;
    }

public:
    void calculateCost()
    {
        int cost;
        cost = length * width * ratePerSqFeet;
        cout << "Cost of the Building : " << cost << endl;
    }

public:
    void determineSuitability()
    {
        cout << "Suitability : ";
        if (abs(length - width) <= 10)
            cout << "Suitable";
        else
            cout << "Not Suitable";
    }
};

int main()
{
    Building objname;
    int a, b, c, l, w, r;
    cin >> a >> b >> c;
    objname.initializeData(a, b, c);
    l = objname.getLength();
    w = objname.getWidth();
    r = objname.getRatePerSqFeet();
    cout << "Length : " << l << endl
         << "Width : " << w << endl
         << "Rate Per SqFt : " << r << endl;
    objname.calculateCost();
    objname.determineSuitability();
    return 0;
}