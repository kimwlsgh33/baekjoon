#include <iostream>
using namespace std;
int main(void) {
  unsigned int year;
  cin >> year;

  cout << (year % 100 != 0 && year % 4 == 0 || year % 400 == 0);
}