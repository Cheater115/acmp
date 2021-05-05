nSet1, nSet2 = map(int, input().split())

set1 = set(map(int, input().split()))
set2 = set(map(int, input().split()))

intersectionSet = set1.intersection(set2)

if len(intersectionSet) > 0:
    print(*sorted(intersectionSet))
