#include <stdio.h>

int main(void)
{
    int hour, min, t;
    scanf("%d %d %d", &hour, &min, &t);
    
    min = min + t;
    
    if(min >= 60)
    {
        hour = hour + (min / 60);
        min = min % 60;
    }
    
    if (hour >= 24)
    {
        hour = hour%24;
    }
    
    printf("%d %d", hour, min);
    
    return 0;
}