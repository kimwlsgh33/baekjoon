#include <stdio.h>

int main(void)
{
    int test;
    scanf("%d", &test);


    for(int i = 0; i < test; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }

    return 0;
}