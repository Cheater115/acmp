def hasOneDiff(s1, s2):
    if len(s1) != len(s2):
        return False
    cntDiff = 0
    for i in range(len(s1)):
        if s1[i] != s2[i]:
            cntDiff += 1
    return cntDiff == 1


nNames = int(input())
names = [input() for _ in range(nNames)]

nWords = int(input())
words = [input() for _ in range(nWords)]

for name in names:
    cnt = 0
    for word in words:
        cnt += hasOneDiff(name, word)
    print(cnt)
