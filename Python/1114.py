v, t = map(int, input().split())

s = v * t
if s >= 0:
    print(s % 109 + 1)
else:
    print(109 - abs(s) % 109 + 1)
