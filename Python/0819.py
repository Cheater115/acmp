length, width, height = map(int, input().split())

area = (length * width + length * height + width * height) * 2
volume = length * width * height

print(area, volume)
