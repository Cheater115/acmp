a, b, c = map(int, input().split())
isFirst = True

if a != 0:
    print(a, end='')
    isFirst = False
if b != 0:
    if b < -1:
        print(b, 'x', sep='', end='')
    elif b == -1:
        print('-x', end='')
    else:
        if not isFirst:
            print('+', end='')
        if b != 1:
            print(b, end='')
        print('x', end='')
    isFirst = False
if c != 0:
    if c < -1:
        print(c, 'y', sep='', end='')
    elif c == -1:
        print('-y', end='')
    else:
        if not isFirst:
            print('+', end='')
        if c != 1:
            print(c, end='')
        print('y', end='')
    isFirst = False
if isFirst:
    print('0', end='')
print()
