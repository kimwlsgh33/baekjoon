#include <iostream>
using namespace std;
int main() {
  int N, X;
  cin >> N >> X;

  int arr[N];

  int i;
  for (i = 0; i < N; ++i) {
    cin >> arr[i];
  }

  for (i = 0; i < N; ++i) {
    if (arr[i] < X)
      cout << arr[i] << " ";
  }
}
