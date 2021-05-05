x1, y1 = map(int, input().split())
x2, y2 = map(int, input().split())

dx = abs(x1 - x2)
dy = abs(y1 - y2)

if x1 == x2 and dy == 1 or y1 == y2 and dx == 1 or dx == dy and dx == 1:
    print('YES')
else:
    print('NO')
