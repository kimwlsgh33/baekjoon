#include <stdio.h>

int main(void)
{
    long long a,b,c;    // 입력이 10^12까지가 조건이라 했을때, int형으로 쓰면 크기가 맞지않음.

    scanf("%lld %lld %lld", &a,&b, &c);

    printf("%lld\n", a+b+c);
    return 0;
}