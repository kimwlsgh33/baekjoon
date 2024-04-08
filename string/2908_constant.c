#include <stdio.h>

/**
 * @brief
 * 1. read from last to first
 * 2. compare two string as numbers
 * 3. print big number as reverse order
 */
int main(void) {
  char A[4], B[4], big[4] = {0};
  scanf("%s %s", A, B);

  int aBig = 0;
  for (int i = 2; i >= 0; --i) {
    // 254 554
    if (A[i] > B[i]) {
      aBig = 1;
      break;
    } else if (A[i] < B[i]) {
      aBig = 0;
      break;
    }
  }

  for (int i = 0; i < 3; ++i) {
    if (aBig) {
      // fill [0, 2]
      big[i] = A[2 - i];
    } else {
      big[i] = B[2 - i];
    }
  }

  printf("%s\n", big);

  return 0;
}
