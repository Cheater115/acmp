#include <iostream>
using namespace std;


int main()
{
    int x1, y1, x2, y2, xa, ya, xb, yb;


    cin >> x1 >> y1 >> x2 >> y2 >> xa >> ya;

    if (x1 == x2)
    {
        yb = ya;
        xb = 2 * x1 - xa;
    }
    else
    {
        xb = xa;
        yb = 2 * y1 - ya;
    }

    cout << xb << " " << yb << endl;

    return 0;
}
