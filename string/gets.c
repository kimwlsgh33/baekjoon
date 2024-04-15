#include <stdio.h>

int main(void) {
  char str[100];
  fgets(str, sizeof(str), stdin);

  int idx = 0;
  printf("[");
  while(str[idx] != '\0') {
    printf("%c", str[idx++]);
  }
  printf("]");
  return 0;
}
