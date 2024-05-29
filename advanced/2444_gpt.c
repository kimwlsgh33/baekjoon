#include <stdio.h>

int main() {
  int i, j, N;

  scanf("%d", &N);

  // Upper half of the pattern 
  // i: [1, N] - loop: N
  for (i = 1; i <= N; i++) {
    // Print spaces 
    // j: [i, N) - loop: [1, N-1], ..., [N-1, N-1]
    for (j = i; j < N; j++)
      printf(" ");

    // HACK: If you found a arithmetic progression in a number of loops,
    // you can represent that by multiplying a changing value in the condition of the loop.

    // Print stars 
    // j: [1, 2*i-1] - loop: [1, 1], ..., [1, 2*N-1]
    for (j = 1; j <= 2 * i - 1; j++)
      printf("*");

    printf("\n");
  }

  // Lower half of the pattern
  // i: [N-1, 1] - loop: N-1
  for (i = N - 1; i >= 1; i--) {
    // Print spaces
    // j: [N, i) - loop: [N, N-1), ..., [N, 1]
    for (j = N; j > i; j--)
      printf(" ");

    // Print stars
    // j: [1, 2*i-1] - loop: [1, 2 * N-1 - 1], ..., [1, 2 * 1 - 1]:[1, 1]
    for (j = 1; j <= 2 * i - 1; j++)
      printf("*");

    printf("\n");
  }

  return 0;
}

// N: 5
//                                  [0,N - 2]   => ' ', [N - 1,N - 1] => '*'
//    *      ' '4, '*'1, (5)    0   [0,3]       => ' ', [4,4]         => '*'
//   ***     ' '3, '*'3, (6)    1   [0,2]       => ' ', [3,5]         => '*'
//  *****    ' '2, '*'5, (7)    2   [0,1]       => ' ', [2,6]         => '*'
// *******   ' '1, '*'7, (8)    3   [0,0]       => ' ', [1,7]         => '*'
//*********  ' '0, '*'9, (9)    4   []          => ' ', [0,8]         => '*'
//                                  []          => ' ', [1,N * 2 - 2] => '*'
//
// loop:  5 : => N => i => 1 ~ N
//  i :   5 : => + 1 => 1 ~ N
// ' ':   4 : => + 1 => i ~ N (-1)
// '*':   1 : => + 2 => 1 ~ 2 * i - 1

//
// *******   1,7(8)    5    [0,0]     => ' ', [1,7]       => '*'
//  *****    2,5(7)    6    [0,1]     => ' ', [2,6]       => '*'
//   ***     3,3(6)    7    [0,2]     => ' ', [3,5]       => '*'
//    *      4,1(5)    8    [0,3]     => ' ', [4,4]       => '*'
//                          [0,N - 2] => ' ', [N-1, N-1]  => '*'
//
// loop: 4 => N-1 => i
