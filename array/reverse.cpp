#include <iostream>
using namespace std;

int main() {
  int N, M, i, j, n;
  cin >> N >> M;

  int arr[N];

  for (n = 0; n < N; ++n) {
    arr[n] = n + 1;
  }

  for (int n1 = 0; n1 < M; ++n1) {
    cin >> i >> j;
    for (int n2 = i; n2 <= j; ++n2) {
      // TODO: reverse
      // 1 2 3 4 5
      // 5 4 3 2 1
      int tmp = arr[n2];
      arr[n2] = arr[j];
      arr[j] = tmp;
    }
  }

  for (n = 0; n < N; ++n) {
    cout << arr[n] << ' ';
  }
}
