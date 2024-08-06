#include <stdio.h>

int main()
{
    int year;
    // 불기 연도 ==> 서기연도로 변환
    // 계산식 : 불기 연도 - 543

    scanf("%d", &year);
    printf("%d\n", year - 543);

    return 0;
}