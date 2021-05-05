#include <iostream>
using namespace std;


int main()
{
    int x1, y1, x2, y2, dx, dy;

    cin >> x1 >> y1 >> x2 >> y2;

    dx = x1 - x2;
    if (dx < 0)
        dx = -dx;
    dy = y1 - y2;
    if (dy < 0)
        dy = -dy;

    if (x1 == x2 || y1 == y2 || dx == dy)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
