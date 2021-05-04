nDays = int(input())
days = list(map(int, input().split()))

mark3 = 0
for day in days:
    if day % 2 == 1:
        print(day, end=" ")
        mark3 += 1
print()

mark4 = 0
for day in days:
    if day % 2 == 0:
        print(day, end=" ")
        mark4 += 1
print()

if mark4 >= mark3:
    print("YES")
else:
    print("NO")
