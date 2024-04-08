#include <stdio.h>
int main(void) {
  char str[101];
  scanf("%s", str);

  int idx = 0, result;
  // i : ['a', 'z']
  for (int i = 'a'; i <= 'z'; ++i, idx = 0) {
    result = -1;
    // idx : [0, last]
    while (str[idx] != '\0') {
      if (str[idx] == i) { // the ascii exists in array
        result = idx;     // change result
        break;
      }
      idx++;
    }
    printf("%d ", result);
  }
  return 0;
}
