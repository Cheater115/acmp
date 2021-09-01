#include <iostream>
using namespace std;


int main()
{
    int nStateMachines;

    cin >> nStateMachines;
    for (int i = 0; i < nStateMachines; i++)
    {
        int nStates, nTransitions, nontriviality;
        cin >> nStates >> nTransitions;
        nontriviality = 19 * nTransitions + (nStates + 239) * (nStates + 366) / 2;
        cout << nontriviality << endl;
    }

    return 0;
}
