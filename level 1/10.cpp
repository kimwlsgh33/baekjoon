#include <iostream>

int main() {
    int num1, num2;
    std::cin >> num1; // 첫 번째 정수를 입력 받음
    std::cin >> num2; // 두 번째 정수를 입력 받음

    int one = num2 % 10 * num1; // 두 번째 정수의 일의 자리를 구하고 첫 번째 정수와 곱함
    int ten = (num2 / 10) % 10 * num1; // 두 번째 정수의 십의 자리를 구하고 첫 번째 정수와 곱함
    int hundred = (num2 / 100) % 10 * num1; // 두 번째 정수의 백의 자리를 구하고 첫 번째 정수와 곱함

    std::cout << one << std::endl; // 일의 자리 결과 출력
    std::cout << ten << std::endl; // 십의 자리 결과 출력
    std::cout << hundred << std::endl; // 백의 자리 결과 출력

    std::cout << hundred * 100 + ten * 10 + one << std::endl; // 모든 자리를 합쳐서 출력

    return 0;
}
