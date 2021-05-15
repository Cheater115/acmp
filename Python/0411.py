a, b, c = map(int, input().split())

if a == 0:
    if b == 0:
        if c == 0:
            print('-1')
        else:
            print('0')
    else:
        x = -c / b
        print(f'1\n{x:.5f}')
else:
    d = b * b - 4 * a * c
    if d > 0:
        x1 = (-b - d ** 0.5) / 2 / a
        x2 = (-b + d ** 0.5) / 2 / a
        print(f'2\n{x1:.5f}\n{x2:.5f}')
    elif d == 0:
        x = -b / 2 / a
        print(f'1\n{x:.5f}')
    else:
        print('0')
