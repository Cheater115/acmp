def isContract(x1, y1, x2, y2, koef):
    koef = int(koef * 1000 + 0.5)
    return (x2 * x2 + y2 * y2) * 1000000 <= koef * koef * (x1 * x1 + y1 * y1)


nPoints, koef = map(float, input().split())
nPoints = int(nPoints)

contract = True
for _ in range(nPoints):
   x1, y1, x2, y2 = map(int, input().split())
   if not isContract(x1, y1, x2, y2, koef):
       contract = False
       break

print(('Yes' if contract else 'No'))
