#include <stdio.h>

int main(void)
{   
    int a[1000000], b[1000000];
    int T;     
    
    scanf("%d", &T);  
    
    for(int i = 0; i < T; i++)
    {  
        scanf("%d %d", &a[i], &b[i]);
    }
    for(int j = 0; j < T; j++)
    {
        printf("%d\n", a[j] + b[j]);
    }
    return 0;
}