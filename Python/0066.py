keyboard = 'qwertyuiopasdfghjklzxcvbnmq'

letter = input()

for i in range(len(keyboard)):
    if keyboard[i] == letter:
        print(keyboard[i + 1])
        break
