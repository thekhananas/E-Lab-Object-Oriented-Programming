 #include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    int inches;

public:
    void readDistance(void)
    {
        cin >> feet >> inches;
    }

    Distance operator +(Distance sec)
    {
        Distance temp;
        temp.feet = feet + sec.feet + ((inches + sec.inches) / 12);
        temp.inches = (inches + sec.inches) % 12;

        return temp;
    }

    void dispDistance()

    {
        cout << "Feet:" << feet << " Inches:" << inches;
    }
};
int main()
{
    Distance fir, sec, fin;
    fir.readDistance();
    sec.readDistance();
    fin = fir + sec;
    fin.dispDistance();
    return 0;
}
