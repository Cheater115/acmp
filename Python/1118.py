#  an = a0 + (n - 1) * d
#  n = (an - a0 + d) / d

height, up, down = map(int, input().split())

if (height <= up):
    print(1)
else:
    #  d
    diff = up - down
    #  an
    height += (diff - (height - up) % diff) % diff
    #  n
    time = (height - up + diff) // diff

    print(time)
