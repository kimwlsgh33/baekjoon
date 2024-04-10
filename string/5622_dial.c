#include <stdio.h>

int main(void) {
  // word : ['A', 'Z']
  // len(word) : [2, 15]
  // == 3 * 4 ==
  // 3s.  ABC   : [65,67]
  // 4s.  DEF   : [68,70]
  // 5s.  GHI   : [71,73]
  // 6s.  JKL   : [74,76]
  // == 3 4 3 4 ==
  // 7s.  MNO   : [77,79]
  // 8s.  PQRS  : [80,83] 4
  // 9s.  TUV   : [84,87]
  // 10s. WXYZ  : [88,91] 4
  char word[16];
  scanf("%s", word);

  int idx = 0, total = 0;
  // while (word[idx] != '\0') {
  //   //== 3 * 4 ==
  //   if (word[idx] >= 'A' && word[idx] <= 'C')
  //     total += 3;
  //   else if (word[idx] >= 'D' && word[idx] <= 'F')
  //     total += 3 + 1;
  //   else if (word[idx] >= 'G' && word[idx] <= 'I')
  //     total += 3 + 1 + 1;
  //   else if (word[idx] >= 'J' && word[idx] <= 'L')
  //     total += 3 + 1 + 1 + 1;
  //   //== 3 4 3 4 ==
  //   else if (word[idx] >= 'M' && word[idx] <= 'O')
  //     total += 3 + 1 + 1 + 1 + 1;
  //   else if (word[idx] >= 'P' && word[idx] <= 'S')
  //     total += 3 + 1 + 1 + 1 + 1 + 1;
  //   else if (word[idx] >= 'T' && word[idx] <= 'V')
  //     total += 3 + 1 + 1 + 1 + 1 + 1 + 1;
  //   else
  //     total += 3 + 1 + 1 + 1 + 1 + 1 + 1 + 1;
  // }

  int AtoO;
  while (word[idx] != '\0') {
    AtoO = 0;
    // check 'A' ~ 'O'
    for (int i = 0; i < 5; ++i) {
      if (word[idx] >= 'A' + 3 * i && word[idx] <= 'C' + 3 * i) {
        total += 3 + i;
        AtoO = 1;
      }
    }

    if (!AtoO) {
      // check 'P' ~ 'S'
      if (word[idx] >= 'P' && word[idx] <= 'S')
        total += 8;
      else if (word[idx] >= 'T' && word[idx] <= 'V')
        total += 9;
      else
        total += 10;
    }

    idx++;
  }
  // UNUCIC -> 868242 -> 979353 -> 36

  printf("%d\n", total);

  return 0;
}
