#include <iostream>
using namespace std;
int main() {
  int tst_n;
  cin >> tst_n;

  for (int i = 0; i < tst_n; ++i) {
    int num1, num2;
    cin >> num1 >> num2;
    cout << num1 + num2 << endl;
  }
}
