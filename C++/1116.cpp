#include <iostream>
using namespace std;


int secondsInTime(int h, int m, int s)
{
    return h * 3600 + m * 60 + s;
}


int main()
{
    int h1, m1, s1, h2, m2, s2, totalSec1, totalSec2;

    cin >> h1 >> m1 >> s1;
    cin >> h2 >> m2 >> s2;

    totalSec1 = secondsInTime(h1, m1, s1);
    totalSec2 = secondsInTime(h2, m2, s2);

    cout << totalSec2 - totalSec1 << endl;

    return 0;
}
