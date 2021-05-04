team1, team2 = 0, 0

for _ in range(4):
    points1, points2 = map(int, input().split())
    team1 += points1
    team2 += points2

if team1 > team2:
    print('1')
elif team1 < team2:
    print('2')
else:
    print('DRAW')
