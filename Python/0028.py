x1, y1, x2, y2 = map(int, input().split())
xa, ya = map(int, input().split())
 
if x1 == x2:
    yb = ya
    xb = 2 * x1 - xa
else:
    xb = xa
    yb = 2 * y1 - ya
 
print(xb, yb)
