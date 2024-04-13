#include <stdio.h>

int main(void) {
  char word[16];
  scanf("%s", word);

  int total = 0, idx = 0, n;
  while (word[idx] != '\0') {
    n = word[idx] - 'A';

    if (n < 3) {
      total += 3;
    } else if (n < 6) {
      total += 4;
    } else if (n < 9) {
      total += 5;
    } else if (n < 12) {
      total += 6;
    } else if (n < 15) {
      total += 7;
    } else if (n < 19) {
      total += 8;
    } else if (n < 22) {
      total += 9;
    } else if (n < 26) {
      total += 10;
    }

    idx++;
  }

  printf("%d\n", total);
  return 0;
}
