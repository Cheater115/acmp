length = int(input())

price = length // 10
if length % 10:
    price += 1

print(price)
