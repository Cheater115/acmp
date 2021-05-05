num1, num2 = map(int, input().split())

mod = num1 % num2
if mod < 0:
    mod += abs(num2)

print(mod)
