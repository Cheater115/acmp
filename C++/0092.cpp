#include <iostream>
using namespace std;

int main()
{
    int totalCranes, serezhaCranes, petyaCranes, katyCranes;

    cin >> totalCranes;
    katyCranes = totalCranes / 6 * 4;
    petyaCranes = serezhaCranes = totalCranes / 6;
    cout << petyaCranes << " " << katyCranes << " " << serezhaCranes << endl;

    return 0;
}
