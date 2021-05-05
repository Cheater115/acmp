def sumDigits(num):
    s = 0
    if num < 0:
        num = -num
    while num > 0:
        s += num % 10
        num //= 10
    return s


ticketNum = int(input())
leftSum = sumDigits(ticketNum // 1000)
rightSum = sumDigits(ticketNum % 1000)

if leftSum == rightSum:
    print('YES')
else:
    print('NO')
