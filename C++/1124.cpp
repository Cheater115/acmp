#include <iostream>
using namespace std;


int main()
{
    int x1, y1, x2, y2, dx, dy;

    cin >> x1 >> y1 >> x2 >> y2;

    dx = x2 - x1;
    dy = y2 - y1;

    if (y1 > 1 && dx == 0 && (dy == 1 || (dy == 2 && y1 == 2)))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
