#include <iostream>
using namespace std;

int main() {
  bool student[30] = {0};
  int n;

  for (int i = 0; i < 28; ++i) {
    cin >> n;
    student[n - 1] = true;
  }

  for (int i = 0; i < 30; ++i) {
    if (!student[i])
      cout << i + 1 << endl;
  }
}
