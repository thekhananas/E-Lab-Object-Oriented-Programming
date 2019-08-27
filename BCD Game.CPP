//Author Pulkit Singh

#include <iostream>
using namespace std;

class Code {
  int number;
  public:
    void initializeData(int n) {
      number = n;
    }
  int convertToStraightBinary() {
    int binaryNum[12];
    int i = 0;
    while (number > 0) {
      binaryNum[i] = number % 2;
      number = number / 2;
      i++;
    }
    FILL:
      if (i < 12) {
        binaryNum[i] = 0;
        i++;
        goto FILL;
      }
    for (int j = i - 1; j >= 0; j--)
      cout << binaryNum[j];
  }
};

int main() {
  Code obj;
  int n;
  cin >> n;
  obj.initializeData(n);
  obj.convertToStraightBinary();
  return 0;
}
