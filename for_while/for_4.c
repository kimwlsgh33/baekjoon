// for 활용하여 영수증에 적힌 금액이 맞는지 확인하기.
#include <stdio.h>

int main(void)
{   
    int total, num;
    int a,b;
    
    scanf("%d", &total);
    scanf("%d", &num); //구매한 물건의 종류의 수
    


    for(int i = 0; i < num; i++)
    {  
        scanf("%d %d", &a, &b); //각 물건의 가격, 개수
        total = total - (a * b);       
    }
    
    if(total == 0) printf("Yes\n");
    else printf("No\n");
    
    return 0;
}