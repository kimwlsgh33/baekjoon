#include <iostream>
using namespace std;
int main() {
  int N;
  cin >> N;

  for (int i = 1; i <= N; ++i) {
    for (int j = 1; j <= N; ++j) {
      // i + j : [2, 3, 4, 5, 6]
      if (i + j > N) {
        cout << '*';
      } else {
        cout << ' ';
      }
    }
    cout << '\n';
  }
}
