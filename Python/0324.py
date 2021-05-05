num = int(input())
 
if num // 1000 == num % 10 and num // 100 % 10 == num % 100 // 10:
    print('YES')
else:
    print('NO')
    