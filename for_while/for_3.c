// for 문을 활용하여 입력한 숫자까지 합 구하기
#include <stdio.h>

int main(void)
{
    int n;
    int result = 0;
    scanf("%d", &n);

    
    for(int i = 0; i <= n; i++)
    {
      result = result +i;
    }
    printf("%d\n", result);
    return 0;
}