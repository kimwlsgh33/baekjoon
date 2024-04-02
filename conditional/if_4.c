#include <stdio.h>

int main(void)
{
    int a,b;
    scanf("%d\n%d", &a, &b);

    int num;
    if(a > 0 && b > 0)
    {
        num = 1;
        printf("%d\n", num);
    } else if (a < 0 && b > 0)
    {
        num = 2;
        printf("%d\n", num);
    } else if (a < 0 && b < 0)
    {
        num = 3;
        printf("%d\n", num);
    } else
    {
        num = 4;
        printf("%d\n", num);
    }
    return 0;
}