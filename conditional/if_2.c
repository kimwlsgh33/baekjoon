#include <stdio.h>

int main()
{
    int num;

    scanf("%d", &num);

    if ((90 <= num) && (num <=100))
    {
        printf("A\n");
    }
    else if ((80 <= num) && ( num<= 89))
    {
        printf("B\n");
    }
    else if ((70 <= num) && ( num <= 79))
    {
        printf("C\n");
    }
    else if ((60 <= num) && (num <= 69))
    {
        printf("D\n");
    }
    else
    {
        printf("F\n");
    }
    return 0;
}