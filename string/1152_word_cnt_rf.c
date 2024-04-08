#include <stdio.h>
int main(void) {
  char str[1000002];
  fgets(str, sizeof(str), stdin);
  // start from index '1'
  int idx = 1, cnt = 1;

  while (str[idx] != '\n') {
    if (str[idx++] == ' ')
      cnt++;
  }

  // remove last blank
  if (str[idx - 1] == ' ')
    cnt--;

  printf("%d\n", cnt);
  return 0;
}
