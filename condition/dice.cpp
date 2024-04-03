#include <iostream>
using namespace std;

int main() {
  int num1, num2, num3, max;
  cin >> num1 >> num2 >> num3;

  if (num1 == num2) {
    if (num2 == num3) {
      // 같은 눈이 3개
      cout << 10000 + num1 * 1000;
    } else {
      // 같은 눈이 2개 - 1
      cout << 1000 + num1 * 100;
    }
  } else if (num2 == num3) {
    // 같은 눈이 2개 - 2
    cout << 1000 + num2 * 100;
  } else if (num3 == num1) {
    // 같은 눈이 2개 - 2
    cout << 1000 + num3 * 100;
  } else if (num2 != num3 && num1 != num3) {
    // 모두 다른 눈
    max = num1;
    if (max < num2) {
      max = num2;
    }
    if (max < num3) {
      max = num3;
    }
    cout << max * 100;
  }
}
