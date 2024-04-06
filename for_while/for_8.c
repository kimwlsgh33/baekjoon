#include <stdio.h>

int main(void)
{   
    int a,b;
    int T;     
    
    scanf("%d", &T);  
    
    for(int i = 0; i < T; i++)
    {  
        int x;
        x++;
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d + %d = %d\n", x,a, b, a+b);
    }

    return 0;
}