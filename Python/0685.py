def mid(num1, num2, num3):
    if num2 <= num1 and num1 <= num3 or num3 <= num1 and num1 <= num2:
        return num1
    if num1 <= num2 and num2 <= num3 or num3 <= num2 and num2 <= num1:
        return num2
    return num3


price1, price2, price3, volume1, volume2, volume3 = map(int, input().split())

maxPrice = max(price1, price2, price3)
minPrice = min(price1, price2, price3)
midPrice = mid(price1, price2, price3)

maxVolume = max(volume1, volume2, volume3)
minVolume = min(volume1, volume2, volume3)
midVolume = mid(volume1, volume2, volume3)

money = maxPrice * maxVolume + minPrice * minVolume + midPrice * midVolume
print(money)
