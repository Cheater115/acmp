nNums = int(input())

nums = list(map(int, input().split()))
print(*reversed(nums))
