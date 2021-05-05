lessonNum = int(input())

minutes = lessonNum * 45 + lessonNum // 2 * 5 + (lessonNum - 1) // 2 * 15
hours = 9 + minutes // 60
minutes %= 60

print(hours, minutes)
