#include <iostream>
using namespace std;
int main()
{
    int radius, side, area1, area2;
    std::cin >> radius >> side;

    area1 = 3.14 * radius * radius;
    area2 = side * side;

    if (area1 > area2)
    {
        std::cout << "I prefer centre 1" << '\n';
    }
    else
    {
        std::cout << "I prefer centre 2" << '\n';
    }
    return 0;
}