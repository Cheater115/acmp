maxZeroSeq = 0
curZeroSeq = 0

binSeq = input()

for c in binSeq:
    if c == '1':
        maxZeroSeq = max(maxZeroSeq, curZeroSeq)
        curZeroSeq = 0
    else:
        curZeroSeq += 1
maxZeroSeq = max(maxZeroSeq, curZeroSeq)

print(maxZeroSeq)
