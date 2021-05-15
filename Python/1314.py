l1, w1, h1 = map(int, input().split())
l2, w2, h2 = map(int, input().split())
lc, wc, hc = map(int, input().split())

if h1 > hc or (w1 > wc and w1 > lc) or (l1 > wc and l1 > lc)\
  or h2 > hc or (w2 > wc and w2 > lc) or (l2 > wc and l2 > lc):
    print('NO')
elif h1 + h2 <= hc\
  or l1 + l2 <= lc and w1 <= wc and w2 <= wc\
  or l1 + w2 <= lc and w1 <= wc and l2 <= wc\
  or w1 + l2 <= lc and l1 <= wc and w2 <= wc\
  or w1 + w2 <= lc and l1 <= wc and l2 <= wc\
  or l1 + l2 <= wc and w1 <= lc and w2 <= lc\
  or l1 + w2 <= wc and w1 <= lc and l2 <= lc\
  or w1 + l2 <= wc and l1 <= lc and w2 <= lc\
  or w1 + w2 <= wc and l1 <= lc and l2 <= lc:
    print('YES')
else:
    print('NO')
