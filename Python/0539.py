nGuests = int(input())

if nGuests == 1:
    print('0')
elif nGuests % 2 == 0:
    print(nGuests // 2)
else:
    print(nGuests)
