#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
    int x1, y1, x2, y2;


    cin >> x1 >> y1 >> x2 >> y2;

    double distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

    cout << fixed << setprecision(5) << distance << endl;

    return 0;
}
