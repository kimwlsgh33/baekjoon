#include <iostream>
using namespace std;

int main() {
  int N, M, i, j, n;
  cin >> N >> M;

  int arr[N];

  // initilize [1:N]
  for (n = 1; n <= N; ++n) {
    arr[n - 1] = n;
  }

  int tmp;
  for (int n1 = 0; n1 < M; ++n1) {
    cin >> i >> j; // input range

    // swap(a1, an), swap(a2, an-1), ... stop when it's middle
    while (i < j) {
      tmp = arr[i - 1];
      arr[i - 1] = arr[j - 1];
      arr[j - 1] = tmp;
      ++i;
      --j;
    }
    // a2, a3, a4, a5, a6 => i: 2, j: 6 => (j - i + 1) => 5 (6 - 2 + 1)
    // for (int n2 = 0; n2 < (j - i + 1) / 2; ++n2) {
    //   // 1 2 3 4 5 => i: 1, j: 5
    //   int tmp = arr[i - 1];
    //   arr[i - 1] = arr[j - n2];
    //   arr[j - n2] = tmp;
    // }
  }

  for (n = 0; n < N; ++n) {
    cout << arr[n] << ' ';
  }
}
