#include <iostream>
using namespace std;

int main() {
  cin.tie(NULL);
  cin.sync_with_stdio(false);

  int N, M;

  cin >> N;

  int scores[N];

  int i;
  for (i = 0; i < N; ++i) {
    cin >> scores[i];

    // HACK: You have to check unexprected inputs
    if (scores[i] > 100 || scores[i] < 0)
      return 0;

    // input max value M
    if (M < scores[i])
      M = scores[i];
  }

  if (M <= 0)
    return 0;

  double sum = 0;
  // convert all value
  for (i = 0; i < N; ++i) {
    sum += (double)scores[i] / M * 100;
  }

  cout << sum / N;
}
