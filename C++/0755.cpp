#include <iostream>
using namespace std;

int main()
{
    int mashaBerries, mishaBerries, eatenBerries, totalBerries;

    cin >> mashaBerries >> mishaBerries >> eatenBerries;
    totalBerries = mashaBerries + mishaBerries - eatenBerries;

    if (totalBerries >= 0)
        cout << totalBerries << endl;
    else
        cout << "Impossible" << endl;

    return 0;
}
