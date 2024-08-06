#include <stdio.h>

int main()
{
	int a, b;   //a = 472 b = 385

	scanf("%d\n %d", &a, &b);

    printf("%d\n", a * (b % 10));
    // b 1의자리 숫자 추출하여 곱셈
    
    printf("%d\n", a * ((b % 100) /10));
   // b 10의 자리 숫자 추출하여 곱셈 
  
    printf("%d\n", a * (b /100));
    // b 100의 자리 숫자 추출하여 곱셈
    printf("%d\n", a * b);
    
    return 0;
}