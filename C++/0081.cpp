#include <iostream>
using namespace std;


int main()
{
    int maxWeight = 0, minWeight = 0, nWeights, weight;

    cin >> nWeights;

    if (nWeights > 0)
    {
        cin >> weight;
        maxWeight = minWeight = weight;
    }

    for (int i = 1; i < nWeights; i++)
    {
        cin >> weight;
        if (maxWeight < weight)
            maxWeight = weight;
        else if (minWeight > weight)
            minWeight = weight;
    }

    cout << minWeight << " " << maxWeight << endl;

    return 0;
}
