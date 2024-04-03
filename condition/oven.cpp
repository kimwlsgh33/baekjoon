#include <iostream>

using namespace std;

int main() {
  int hour, min, need_min;
  cin >> hour >> min >> need_min;

  int rs = min + need_min;

  // calculate minutes
  min = rs % 60;

  if (rs >= 60) {
    hour = (hour + rs / 60) % 24;
  }

  cout << hour << " " << min << endl;

  return 0;
}
