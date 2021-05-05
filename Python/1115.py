nPupils, nApples = map(int, input().split())

appleByPupil = nApples // nPupils
appleInBasket = nApples % nPupils
resentPupil = (nPupils - appleInBasket) % nPupils

print(appleByPupil, appleInBasket, resentPupil)
