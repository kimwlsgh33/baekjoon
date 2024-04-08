#include <stdio.h>

int main(void) {
  // ['A', 'Z'] => [3, 4, ..., 10] => 10 - 3 + 1 => 8
  int time[8];

  // store elapse time * 2
  for (int i = 3; i < 11; ++i) {
    time[i - 3] = i * 2;
  }

  // word : ['A', 'Z']
  // 1. ABC : [65,67]
  // 2. DEF : [68,70]
  // 3. GHI : [6,73]
  // ...
  char word[16];
  scanf("%s", word);

  int idx = 0, total = 0;
  // [first, last]
  while (word[idx] != '\0') {
    // elapse time [0, 7]
    for (int i = 0; i < 8; ++i) {
      // TODO: generalize sequence
      if ('A' + i * 3 <= word[idx] && word[idx] <= 'C' + i * 3)
        total += time[idx];
    }

    idx++;
  }

  return 0;
}
