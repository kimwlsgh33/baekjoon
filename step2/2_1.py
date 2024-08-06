num = input() # 두 정수 입력받기
num1= num.split() # 수 사이 공백 구분

a = int(num1[0])
b = int(num1[1])

if a > b :      # A가 더 클 경우
    print(">")
elif a < b :    # B가 더 클 경우
    print("<")
else :          # A,B 가 같을 경우
    print("==")