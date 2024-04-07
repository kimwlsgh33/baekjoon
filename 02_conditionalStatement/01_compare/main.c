// 문제
// 두 정수 A와 B가 주어졌을 때, A와 B를 비교하는 프로그램을 작성하시오.

// 입력
// 첫째 줄에 A와 B가 주어진다. A와 B는 공백 한 칸으로 구분되어져 있다.

#include<stdio.h>
int main(void){
    int A;
    int B;
    scanf("%d%d",&A,&B);
    if(A>B){
        printf(">");
    }else if(A<B){
        printf("<");
    }else{
        printf("==");
    }
}