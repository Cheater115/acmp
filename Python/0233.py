busHeight = 437
crashNumber = 0

nBridges = int(input())
heights = list(map(int, input().split()))

for num, height in enumerate(heights, 1):
    if height <= busHeight:
        crashNumber = num
        break

if crashNumber == 0:
    print('No crash')
else:
    print('Crash', crashNumber)
