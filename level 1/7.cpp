#include <iostream>

int main(void) {
    const int MAX_LENGTH = 50;
    char str[MAX_LENGTH + 1]; // 문자열을 저장할 배열 (+1은 널 종료 문자 '\0'를 위한 공간)

    std::cin >> str; // 문자열 입력
    std::cout << str << "??!" << std::endl; // 문자열 출력

    return 0;
}
