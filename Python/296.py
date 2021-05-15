price = int(input())

basilio = price // 5
if (price - basilio * 5) % 3 == 1:
    basilio -= 1
elif (price - basilio * 5) % 3 == 2:
    basilio -= 2
alica = (price - basilio * 5) // 3

print(basilio, alica)
