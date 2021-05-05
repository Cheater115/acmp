#include <iostream>
using namespace std;


int main()
{
    int height, up, down, diff, time;

    cin >> height >> up >> down;


    if (up >= height)
        cout << "1" << endl;
    else
    {
        //  an = a0 + (n - 1) * d
        //  n = (an - a0 + d) / d

        //  d
        diff = up - down;
        //  an
        height += (diff - (height - up) % diff) % diff;
        //  n
        time = (height - up + diff) / diff;

        cout << time << endl;
    }

    return 0;
}
