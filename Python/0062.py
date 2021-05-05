cell = input()

x = ord(cell[0]) - ord('A') + 1
y = ord(cell[1]) - ord('0')

if (x + y) % 2 == 0:
    print('BLACK')
else:
    print('WHITE')
