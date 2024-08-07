def find_max():

    #9개의 자연수 입력받아 리스트에 저장하기
    num = [int(input()) for _ in range(9)]

    # 최댓값 찾기
    max_value = max(num)

    # 최댓값의 위치 착기(1부터 시작이니까 +1해주기)
    max_position = num.index(max_value) +1

    # 출력
    print(max_value)
    print(max_position)

find_max()
