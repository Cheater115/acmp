num = int(input())

while num > 0 and (num & 1) == 0:
    num >>= 1

if num == 1:
    print('YES')
else:
    print('NO')
