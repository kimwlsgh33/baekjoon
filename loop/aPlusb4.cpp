#include <iostream>
using namespace std;

int main() {
  int A, B;
  // The cin return false when it's reached at end of file
  while (cin >> A) {
    cin >> B;
    cout << A + B << '\n';
  }
}
