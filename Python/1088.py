def canRook(x1, y1, x2, y2):
    return x1 == x2 or y1 == y2


def canBishop(x1, y1, x2, y2):
    dx = abs(x1 - x2)
    dy = abs(y1 - y2)
    return dx == dy


def canKnight(x1, y1, x2, y2):
    dx = abs(x1 - x2)
    dy = abs(y1 - y2)
    return dx == 2 and dy == 1 or dx == 1 and dy == 2


def canQueen(x1, y1, x2, y2):
    dx = abs(x1 - x2)
    dy = abs(y1 - y2)
    return x1 == x2 or y1 == y2 or dx == dy


def canKing(x1, y1, x2, y2):
    dx = abs(x1 - x2)
    dy = abs(y1 - y2)
    return x1 == x2 and dy == 1 or y1 == y2 and dx == 1 or dx == dy and dx == 1


def canPawn(x1, y1, x2, y2):
    dx = x2 - x1
    dy = y2 - y1

    return  y1 > 1 and dx == 0 and (dy == 1 or dy == 2 and y1 == 2)


coord1, coord2 = input().split()

x1 = ord(coord1[0]) - ord('A') + 1
y1 = ord(coord1[1]) - ord('0')
x2 = ord(coord2[0]) - ord('A') + 1
y2 = ord(coord2[1]) - ord('0')

hasFigure = False
if canRook(x1, y1, x2, y2):
    hasFigure = True
    print('Rook')
if canBishop(x1, y1, x2, y2):
    hasFigure = True
    print('Bishop')
if canKnight(x1, y1, x2, y2):
    hasFigure = True
    print('Knight')
if canQueen(x1, y1, x2, y2):
    hasFigure = True
    print('Queen')
if canKing(x1, y1, x2, y2):
    hasFigure = True
    print('King')
if canPawn(x1, y1, x2, y2):
    hasFigure = True
    print('Pawn')
if not hasFigure:
    print('Nobody')
