#include<stdio.h>

int main(void){
    int count;
    scanf("%d",&count);
    int A[100];
    int B[100];
    for (int i = 0; i < count; i++)
    {
        scanf("%d%d",A+i,B+i);
    }
    for (int i = 0; i < count; i++)
    {
        printf("Case #%d: %d\n",i+1,A[i]+B[i]);
    }
    
    
    return 0;
}