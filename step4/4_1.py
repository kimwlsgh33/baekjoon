# 첫째 줄: 정수의 개수 N 입력 받기
N = int(input())

# 둘째 줄: 공백으로 구분된 N개의 정수 입력 받기
numbers = list(map(int, input().split()))

# 셋째 줄: 찾으려는 정수 v 입력 받기
v = int(input())

# 배열에서 v의 개수를 세기
count_v = numbers.count(v)

# 결과 출력
print(count_v)
