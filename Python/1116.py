def countSecondInTime(h, m, s):
    return h * 3600 + m * 60 + s


h1, m1, s1 = map(int, input().split())
h2, m2, s2 = map(int, input().split())

totalSec1 = countSecondInTime(h1, m1, s1)
totalSec2 = countSecondInTime(h2, m2, s2)

print(abs(totalSec1 - totalSec2))
