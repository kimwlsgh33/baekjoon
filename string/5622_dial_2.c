#include <stdio.h>

int main(void) {
  char word[16];
  scanf("%s", word);

  int total = 0, idx = 0;
  while (word[idx] != '\0') {
    if (word[idx] < 'D') {
      total += 3;
    } else if (word[idx] < 'G') {
      total += 4;
    } else if (word[idx] < 'J') {
      total += 5;
    } else if (word[idx] < 'M') {
      total += 6;
    } else if (word[idx] < 'P') {
      total += 7;
    } else if (word[idx] < 'T') {
      total += 8;
    } else if (word[idx] < 'W') {
      total += 9;
    } else if (word[idx] <= 'Z') {
      total += 10;
    }

    idx++;
  }

  printf("%d\n", total);
  return 0;
}
