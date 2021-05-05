#include <iostream>
using namespace std;


int main()
{
    const long long cPencilPrice = 3;
    const long long cPenPrice = 5;
    const long long cMarkerPrice = 12;

    long long nPencils, nPens, nMarkers, totalPrice;

    cin >> nPencils >> nPens >> nMarkers;

    totalPrice = nPencils * cPencilPrice + nPens * cPenPrice
        + nMarkers * cMarkerPrice;

    cout << totalPrice << endl;

    return 0;
}
