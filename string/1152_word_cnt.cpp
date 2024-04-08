#include <iostream>
#include <string>
using namespace std;

int main(void) {
  // getline receive '\n' before '\0' => +2
  string str;
  getline(cin, str, '\n');

  int cnt = 1;

  for(char c : str) {
    if (c == ' ') {
      cnt++;
    }
  }

  if(str[0] == ' ') cnt--;
  if(str[str.length() - 1] == ' ') cnt--;


  printf("%d\n", cnt);
  return 0;
}
