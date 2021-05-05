summ, mul = map(int, input().split())

y = int((summ + (summ * summ - 4 * mul) ** 0.5) / 2)
x = summ - y

if x < y:
    print(x, y)
else:
    print(y, x)
