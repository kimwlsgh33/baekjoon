#include <stdio.h>
int main(void) {
    // 정수 A, B 터미널에서 입력 받기 -> scanf()
    //=> 1 2
    int A, B;
    scanf("%d %d", &A, &B);
    // A + B 값 계산하기
    // A + B 값 출력하기 -> printf()
    //=> 3
    printf("%d", A + B);

    return 0;
}