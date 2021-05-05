x1, y1 = map(int, input().split())
x2, y2 = map(int, input().split())

dx = x2 - x1
dy = y2 - y1

if y1 > 1 and dx == 0 and (dy == 1 or dy == 2 and y1 == 2):
    print('YES')
else:
    print('NO')
