# 첫 번째 줄의 N과 X를 입력받음
N, X = map(int, input().split())

# 두 번째 줄의 수열 A를 입력받음
A = list(map(int, input().split()))

# X보다 작은 수를 필터링하여 출력
result = [str(a) for a in A if a < X]
print(' '.join(result))
