#include <stdio.h>

int main(void) {
  int N;
  scanf("%d", &N);

  for (int i = 0; i < (2 * N - 1); ++i) {
    for (int j = 0; j <= N + i; ++j) {
      if (j < N - i || j > N + i) {
        printf(" ");
      } else {
        printf("*");
      }
    }
    printf("\n");
  }
  return 0;
}

// N : 5
//     *      5,1(6)    0
//    ***     4,3(7)    1
//   *****    3,5(8)    2
//  *******   2,7(9)    3
// *********  1,9(10)   4
//  *******   2,7(9)    5
//   *****    3,5(8)    6
//    ***     4,3(7)    7
//     *      5,1(6)    8
