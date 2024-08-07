def find_min_max():
    # 첫 줄에서 정수의 개수 N을 입력
    N = int(input())
    
    # 두 번째 줄에서 N개의 정수를 입력받아 리스트로 변환
    numbers = list(map(int, input().split()))
    
    # 최솟값과 최댓값을 각각 찾기
    min_value = min(numbers)
    max_value = max(numbers)
    
    # 결과를 출력
    print(min_value, max_value)

# 함수 호출
find_min_max()
