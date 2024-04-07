#include <iostream>
using namespace std;

/**
 * @brief Input 10 integers and count the number of distinct values
 *
 * adding count when there is no duplicate is easier than removing duplicate
 */
int main() {
  int arr[10], cnt = 0;
  bool isDup;
  int j;
  for (int i = 0; i < 10; ++i) {
    cin >> arr[i];
    // i % 42
    arr[i] %= 42;

    isDup = false;
    for (j = 0; j < i; j++) {
      if (arr[i] == arr[j]) {
        isDup = true;
        break;
      }
    }

    // add count when there is no duplicate
    if (!isDup)
      cnt++;
  }

  // remove duplicate
  // for (int i = 0; i < 10; ++i) {
  //   for (j = 0; j < i; ++j) {
  //     if (arr[i] == arr[j]) {
  //       break;
  //     }
  //   }
  //
  //   if (i == j)
  //     cnt -= 1;
  // }

  cout << cnt << '\n';
}
