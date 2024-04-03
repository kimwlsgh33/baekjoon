#include <iostream>
using namespace std;
int main(void) {
  int X, N, a, b, sum = 0;
  cin >> X >> N;

  for (int i = 0; i < N; ++i) {
    cin >> a >> b;
    sum += a * b;
  }

  cout << ((X == sum) ? "Yes" : "No") << endl;
}
