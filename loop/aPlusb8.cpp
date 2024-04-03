#include <iostream>
using namespace std;
int main() {
  int T, A, B;
  cin >> T;

  cin.tie(NULL);
  cin.sync_with_stdio(false);

  for (int i = 1; i <= T; ++i) {
    cin >> A >> B;
    cout << "Case #" << i << ": " << A << " + " << B << " = " << A + B << '\n';
  }
}
