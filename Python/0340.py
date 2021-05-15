height1, width1, deepth1 = sorted(map(int, input().split()))
height2, width2, deepth2 = sorted(map(int, input().split()))


if height1 == height2 and width1 == width2 and deepth1 == deepth2:
    print('Boxes are equal')
elif height1 <= height2 and width1 <= width2 and deepth1 <= deepth2:
    print('The first box is smaller than the second one')
elif height1 >= height2 and width1 >= width2 and deepth1 >= deepth2:
    print('The first box is larger than the second one')
else:
    print('Boxes are incomparable')
