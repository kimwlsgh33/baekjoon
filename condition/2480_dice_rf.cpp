#include <iostream>
using namespace std;
int main() {
  int d1, d2, d3;
  cin >> d1 >> d2 >> d3;

  int prize = 0;
  if (d1 == d2 && d2 == d3) {
    prize = 10000 + d1 * 1000;
  } else if (d1 == d2 || d2 == d3 || d3 == d1) {
    // number of all cases where two values are the same.
    int same = (d1 == d2) ? d1 : (d2 == d3) ? d2 : d3;
    prize = 1000 + same * 100;
  } else {
    int max = d1;
    if (max < d2)
      max = d2;
    if (max < d3)
      max = d3;
    prize = max * 100;
  }

  cout << prize << endl;
}
