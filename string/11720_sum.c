#include <stdio.h>

int main(void) {
  int N;
  scanf("%d", &N);

  char str[101];
  scanf("%s", str);

  int idx = 0, sum = 0;
  while (str[idx] != '\0') {
    sum += str[idx++] - '0';
  }

  printf("%d", sum);
}
