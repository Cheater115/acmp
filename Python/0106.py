nCoins = int(input())
heads, tails = 0, 0

for _ in range(nCoins):
    coin = int(input())
    if coin == 0:
        tails += 1
    else:
        heads += 1

print(min(heads, tails))
