#include <stdio.h>

int main(void) {
  char word[101];
  scanf("%s", word);
  unsigned char idx = 0, cnt = 0;
  while (word[idx++] != '\0')
    ++cnt;

  printf("%d\n", cnt);
  return 0;
}
