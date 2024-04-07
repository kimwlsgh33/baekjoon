#include <stdio.h>

int main(void) {
  // word(1000) + '\0'
  char S[1001];
  int i;
  scanf("%s %d", S, &i);
  printf("%c\n", S[i - 1]);
  return 0;
}
