#include <stdio.h>

int main(void) {
  // fgets receive '\n' before '\0' => +2
  char str[100][102];
  int cnt = 0;

  while (fgets(str[cnt], 102, stdin))
    cnt++;

  for (int i = 0; i < cnt; ++i) {
    printf("%s", str[i]);
  }
   
  return 0;
}
