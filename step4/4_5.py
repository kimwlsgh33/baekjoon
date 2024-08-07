def put_balls_in_baskets():
    # 첫 번째 줄에서 N과 M을 읽어오기
    N, M = map(int, input().split())
    
    # 바구니 초기화 (모두 0으로 설정)
    baskets = [0] * N
    
    # M번의 공 넣기 명령 처리
    for _ in range(M):
        i, j, k = map(int, input().split())
        
        # i번 바구니부터 j번 바구니까지 k번 공을 넣기
        for b in range(i - 1, j):
            baskets[b] = k
    
    # 결과 출력
    print(" ".join(map(str, baskets)))

# 함수 호출
put_balls_in_baskets()
