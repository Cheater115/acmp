cPencilPrice = 3
cPenPrice = 5
cMarkerPrice = 12

nPencils, nPens, nMarkers = map(int, input().split())

totalPrice = nPencils * cPencilPrice + nPens * cPenPrice\
    + nMarkers * cMarkerPrice

print(totalPrice)
