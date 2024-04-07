#include <stdio.h>

int main(void) {
  int num1, num2;
  scanf("%d", &num1);
  scanf("%d", &num2);

  // remain the last digit by % 10
  int one = num2 % 10 * num1;
  // remove the last one digit by / 10
  int ten = (num2 / 10) % 10 * num1;
  // remove the last two digit by / 100
  int hundred = (num2 / 100) % 10 * num1;

  // one * num1
  printf("%d\n", one);
  // ten * num1
  printf("%d\n", ten);
  // hundred * num1
  printf("%d\n", hundred);

  printf("%d\n", hundred * 100 + ten * 10 + one);
  
  return 0;
}
