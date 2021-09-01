nTests = int(input())

for _ in range(nTests):
    num1, num2 = input().split()
    digits1 = set(num1)
    digits2 = set(num2)
    if digits1 == digits2:
        print('YES')
    else:
        print('NO')
