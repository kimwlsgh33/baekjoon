#include <stdio.h>

int main(void)
{   
    int n;     
    
    scanf("%d", &n);

    int m = n/4;        // 4의 배수 골라내기
    for(int i = 0; i < m; i++)
    {  
        printf("long "); 
    }
    printf("int"); // 끝에 int 붙이기.

    return 0;
}