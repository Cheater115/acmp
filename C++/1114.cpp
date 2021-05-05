#include <iostream>
using namespace std;


int main()
{
    int v, t, s;

    cin >> v >> t;

    s = v * t;

    if (s >= 0)
        cout << s % 109 + 1 << endl;
    else
        cout << 109 - (-s % 109) + 1 << endl;

    return 0;
}
