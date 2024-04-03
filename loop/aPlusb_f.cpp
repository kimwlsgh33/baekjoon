// You must notice that if I/O method is slow, you might be time out when you
// print it.
#include <iostream>
using namespace std;
int main() {
  // disconnect std output stream from std input stream
  cin.tie(NULL);
  // desynchronize the standard input and output stream
  cin.sync_with_stdio(false);
  int tst_n, n1, n2;
  cin >> tst_n;
  for (int i = 0; i < tst_n; ++i) {
    cin >> n1 >> n2;
    // don't use `endl`
    cout << n1 + n2 << '\n';
  }
}
