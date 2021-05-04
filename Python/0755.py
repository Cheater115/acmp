mashaBerries, mishaBerries, eatenBerries = map(int, input().split())
totalBerries = mashaBerries + mishaBerries - eatenBerries

if totalBerries >= 0:
    print(totalBerries)
else:
    print('Impossible')
