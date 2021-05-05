num1, num2 = map(int, input().split())

if num1 % num2 == 0 or num2 % num1 == 0:
    print('1')
else:
    print('10')
