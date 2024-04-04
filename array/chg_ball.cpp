#include <iostream>
using namespace std;

int main(void) {
  int N, M;
  cin >> N >> M;
  int bucket[N];

  for (int n = 0; n < N; ++n) {
    bucket[n] = n + 1;
  }

  int i, j, tmp;
  for (int n = 0; n < M; ++n) {
    cin >> i >> j;
    // swap
    tmp = bucket[i - 1];
    bucket[i - 1] = bucket[j - 1];
    bucket[j - 1] = tmp;
  }

  for (int n = 0; n < N; ++n) {
    cout << bucket[n] << ' ';
  }
}
