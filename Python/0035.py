nStateMachines = int(input())

for _ in range(nStateMachines):
    nStates, nTransitions = map(int, input().split())
    nontriviality = 19 * nTransitions + (nStates + 239) * (nStates + 366) // 2
    print(nontriviality)
