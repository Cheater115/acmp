#include <iostream>
using namespace std;

int main()
{
    int busHeight = 437, n, bridgeHeight;

    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> bridgeHeight;
        if (bridgeHeight <= busHeight)
        {
            cout << "Crash " << i << endl;
            return 0;
        }
    }
    cout << "No crash" << endl;

    return 0;
}
