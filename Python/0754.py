m1, m2, m3 = map(int, input().split())

res = max(m1, m2, m3)
if m1 < 94 or m2 < 94 or m3 < 94 or res > 727:
    print('Error')
else:
    print(res)
