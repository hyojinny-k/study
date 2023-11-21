print('정수 하나를 입력하세요 : ', end='')
num = int(input())

if num > 0 and num % 5 == 0:
    print('5의 배수입니다.')
else:
    print('5의 배수가 아닙니다.')