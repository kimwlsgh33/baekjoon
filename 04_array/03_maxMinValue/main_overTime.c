// 문제
// N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.

// 입력
// 첫째 줄에 정수의 개수 N (1 ≤ N ≤ 1,000,000)이 주어진다. 둘째 줄에는 N개의 정수를 공백으로 구분해서 주어진다. 모든 정수는 -1,000,000보다 크거나 같고, 1,000,000보다 작거나 같은 정수이다.

// 출력
// 첫째 줄에 주어진 정수 N개의 최솟값과 최댓값을 공백으로 구분해 출력한다.


// 시간 초과
//  - 많은 for문을 사용함에 따른 시간초과로 틀림
#include<stdio.h>

int main(void){
    int T = 0;
    scanf("%d",&T);
    int listN[T];
    int tmep = 0;   // swap 변수

    for (int i = 0; i < T; i++){
        scanf("%d", listN+i);
    }
    
    for (int i = 0 ; i < T ; ++i){
        for (int j = i; j < T-1; j++)
        {
            if (listN[i] > listN[j])
            {
                tmep = listN[i];
                listN[i] = listN[j];
                listN[j] = tmep;
            }
            
        }
    }
    
    printf("%d %d",listN[0], listN[T-1]);
    return 0;
}