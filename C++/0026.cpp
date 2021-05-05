#include <iostream>
using namespace std;


int main()
{
    int x1, y1, r1, x2, y2, r2, squaredDistance;

    cin >> x1 >> y1 >> r1;
    cin >> x2 >> y2 >> r2;

    squaredDistance = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);

    if (squaredDistance <= (r1 + r2) * (r1 + r2)
            && squaredDistance >= (r2 - r1) * (r2 - r1))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
