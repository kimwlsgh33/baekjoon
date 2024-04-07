#include <iostream>
using namespace std;

int main() {
  int arr[10], max_idx = 0;

  cin >> arr[0];
  for (int i = 1; i < 9; ++i) {
    cin >> arr[i];
    if (arr[max_idx] < arr[i])
      max_idx = i;
  }

  cout << arr[max_idx] << '\n' << max_idx + 1 << '\n';
}
