#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    double a, b, c;
    double x1, x2, d;

    cin >> a >> b >> c;

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
                cout << "-1" << endl;
            else
                cout << "0" << endl;
        }
        else
        {
            x1 = -c / b;
            cout <<"1" << endl << x1 << endl;
        }
    }
    else
    {
        d = b * b - 4 * a * c;
        if (d > 0)
        {
            x1 = (-b - sqrt(d)) / 2.0 / a;
            x2 = (-b + sqrt(d)) / 2.0 / a;
            cout << "2" << endl << x1 << endl << x2 << endl;
        }
        else if (d == 0)
        {
            x1 = -b / 2.0 / a;
            cout <<"1" << endl << x1 << endl;
        }
        else
            cout << "0" << endl;
    }

    return 0;
}
