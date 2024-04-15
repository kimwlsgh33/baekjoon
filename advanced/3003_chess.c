#include <stdio.h>

int main(void) {
  // black: 16 + white: 16
  // 16 = king 1 + queen 1 + rook 2 + bishop 2 + knight 2 + pawn 8
  int chess[6] = {1, 1, 2, 2, 2, 8};
  int found[6];
  for (int i = 0; i < 6; ++i) {
    scanf("%d", &found[i]);
  }

  for (int i = 0; i < 6; ++i) {
    printf("%d ", chess[i] - found[i]);
  }
  return 0;
}
