fieldRadius, ufoRadius1, ufoRadius2 = map(int, input().split())

if ufoRadius1 + ufoRadius2 <= fieldRadius:
    print('YES')
else:
    print('NO')
