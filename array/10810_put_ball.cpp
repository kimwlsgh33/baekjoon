#include <iostream>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  int bucket[N]; // bucket: [1:N]

  // initilize into 0
  for (int n = 0; n < N; ++n) {
    bucket[n] = 0;
  }

  // put balls in. i: [1:j], j: [i:N], k: [1:N]
  int i, j, k;
  for (int n1 = 0; n1 < M; ++n1) {
    cin >> i >> j >> k;
    for (int n2 = i; n2 <= j; ++n2) {
      bucket[n2 - 1] = k;
    }
  }

  for (int n = 0; n < N; ++n) {
    cout << bucket[n] << ' ';
  }
}
