#include <iostream>
using namespace std;

bool isError(int w)
{
    return w < 94 || w > 727;
}

int maxInt(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int weight1, weight2, weight3, maxWeight;

    cin >> weight1 >> weight2 >> weight3;
    if (isError(weight1) || isError(weight2) || isError(weight3))
        cout << "Error" << endl;
    else
    {
        maxWeight = maxInt(weight1, maxInt(weight2, weight3));
        cout << maxWeight << endl;
    }

    return 0;
}
