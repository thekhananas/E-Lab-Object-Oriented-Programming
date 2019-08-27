//Author Pulkit Singh

#include <iostream>
using namespace std;

class Car
{
    float startMiles, endMiles, litres;
    float MPL = 0;

public:
    void initializeData(float x, float y, float z)
    {
        startMiles = x;
        endMiles = y;
        litres = z;
    }
    float getstartMiles()
    {
        return startMiles;
    }
    float getEndMiles()
    {
        return endMiles;
    }
    float getLitres()
    {
        return litres;
    }
    float calculateMPL()
    {
        float miles;
        miles = endMiles - startMiles;
        return MPL = miles / litres;
    }
    int isEconomycar()
    {
        if (MPL > 18)
        {
            cout << "true";
            return 0;
        }
        cout << "false";
        return 0;
    }
};

int main()
{
    Car obj;
    float x, y, z;
    cin >> x >> y >> z;
    if (x > y)
    {
        cout << "Improper readings";
        return 0;
    }
    obj.initializeData(x, y, z);
    cout << obj.getstartMiles() << endl;
    cout << obj.getEndMiles() << endl;
    cout << obj.calculateMPL() << endl;
    cout << obj.getLitres() << endl;
    obj.isEconomycar();
    return 0;
}