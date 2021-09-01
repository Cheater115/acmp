nCarbons, nHydrogens, nOxygens = map(int, input().split())
nEthyl = min(nCarbons // 2, nHydrogens // 6, nOxygens)
print(nEthyl)
