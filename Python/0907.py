widthMat1, heightMat1, radiusMat2 = map(int, input().split())

if radiusMat2 * 2 <= widthMat1 and radiusMat2 * 2 <= heightMat1:
    print('YES')
else:
    print('NO')
