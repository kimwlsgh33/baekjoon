#include <stdio.h>
int main(void) {
  // fgets receive '\n' before '\0' => +2
  char str[1000002];
  fgets(str, sizeof(str), stdin);
  int idx = 0, cnt = 1;

  while (str[idx] != '\n') {
    if (str[idx++] == ' ')
      cnt++;
  }

  // remove first blank
  if (str[0] == ' ')
    cnt--;
  // remove last blank
  if (str[idx - 1] == ' ')
    cnt--;

  printf("%d\n", cnt);
  return 0;
}
