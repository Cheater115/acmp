#include <iostream>
using namespace std;


int main()
{
    long long int nCarbons, nHydrogens, nOxygens, nEthyl;

    cin >> nCarbons >>nHydrogens >> nOxygens;

    nEthyl = nCarbons / 2ll;
    if (nHydrogens / 6ll < nEthyl)
        nEthyl = nHydrogens / 6ll;
    if (nOxygens < nEthyl)
        nEthyl = nOxygens;

    cout << nEthyl << endl;

    return 0;
}
