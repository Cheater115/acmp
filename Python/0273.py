num = input()
was = [0] * 1000

for d1 in range(len(num) - 2):
    for d2 in range(d1 + 1, len(num) - 1):
        for d3 in range(d2 + 1, len(num)):
            was[int(num[d1]) * 100 + int(num[d2]) * 10 + int(num[d3])] = 1

cnt = 0
for i in range(100, 1000):
    cnt += was[i]

print(cnt)
