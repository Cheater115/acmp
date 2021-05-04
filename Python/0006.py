def hasError(moves):
    if len(moves) < 5:
        return True
    if moves[0] < 'A' or moves[0] > 'H':
        return True
    if moves[1] < '1' or moves[1] > '8':
        return True
    if moves[2] != '-':
        return True
    if moves[3] < 'A' or moves[3] > 'H':
        return True
    if moves[4] < '1' or moves[4] > '8':
        return True
    return False


def isRightMove(moves):
    dx = abs(ord(moves[0]) - ord(moves[3]))
    dy = abs(ord(moves[1]) - ord(moves[4]))

    if dx == 2 and dy == 1:
        return True
    if dx == 1 and dy == 2:
        return True
    return False


moves = input()
if hasError(moves):
    print("ERROR")
elif isRightMove(moves):
    print("YES")
else:
    print("NO")
