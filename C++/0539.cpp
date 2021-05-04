#include <iostream>
using namespace std;

int main()
{
    int nGuests, nCuts = 0;

    cin >> nGuests;
    if (nGuests % 2 == 0)
        nCuts = nGuests / 2;
    else if (nGuests != 1)
        nCuts = nGuests;
    cout << nCuts << endl;

    return 0;
}
