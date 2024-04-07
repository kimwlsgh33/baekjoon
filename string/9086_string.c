#include <stdio.h>

int main(void) {
  int T;
  scanf("%d", &T);

  int idx;
  for (int i = 0; i < T; ++i, idx = 0) {
    char str[1000];
    scanf("%s", str);

    while (str[idx] != '\0')
      idx++;

    // current idx : '\0'
    printf("%c%c\n", str[0], str[idx - 1]);
  }

  return 0;
}
