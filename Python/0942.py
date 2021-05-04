def getKoef(times, timeLimit):
    cnt = 0
    time = 0
    penalty = 0
    for i in range(len(times)):
        if time + times[i] > timeLimit:
            break
        cnt += 1
        time += times[i]
        penalty += time
    return 10000 * (cnt + 1) - penalty


nProb = int(input())
times = list(map(int, input().split()))

koef5 = getKoef(times, 300)
koef3 = getKoef(list(reversed(times)), 300)
koef1 = getKoef(sorted(times), 300)

if koef1 >= koef3 and koef1 >= koef5:
    print("1")
elif koef3 >= koef5:
    print("3")
else:
    print("5")
