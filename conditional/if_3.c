#include <stdio.h>

int main(void)
{
    int year;
    scanf("%d", &year);
    
    
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        year = 1;
        printf("%d\n", year);
    }
    else
    {
        year = 0;
        printf("%d\n", year);
    }
    return 0;
}