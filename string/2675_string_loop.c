#include <stdio.h>
// #include <string.h>

int main(void) {
  int T, R;
  scanf("%d", &T);
  char S[21];
  for (int i = 0, len = 0; i < T; ++i, len = 0) {
    scanf("%d %s", &R, S);

    // len : 5 => S[len] == '\0'
    while (S[len] != '\0')
      len++;

    // for (int j = 0; j < strlen(S); ++j) {
    for (int j = 0; j < len; ++j) {
      for (int k = 0; k < R; ++k) {
        printf("%c", S[j]);
      }
    }
    printf("\n");
  }
  return 0;
}
