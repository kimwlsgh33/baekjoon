#include <stdio.h>

int main(void)
{
    int i;
    scanf("%d", &i);
    
    int j;

    for(j =1; j < 10; j++)
    {
        printf("%d * %d = %d\n", i, j, i*j );
    }


    return 0;
}