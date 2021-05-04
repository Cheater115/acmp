#include <iostream>
using namespace std;


int main()
{
    int nCoins, heads = 0, tails = 0, coin;

    cin >> nCoins;
    for (int i = 0; i < nCoins; i++)
    {
        cin >> coin;
        if (coin)
            tails++;
        else
            heads++;
    }
    cout << (heads < tails ? heads : tails) << endl;

    return 0;
}
