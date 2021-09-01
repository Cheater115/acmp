#include <iostream>
using namespace std;

bool isContract(long long x1, long long y1,
                long long x2, long long y2, double koef)
{
    long long iKoef = int(koef * 1000 + 0.5);
    return (x2 * x2 + y2 * y2) * 1000000ll <= iKoef * iKoef * (x1 * x1 + y1 * y1);
}

int main()
{
    double koef;
    int x1, x2, y1, y2;
    int n;
    bool contract = true;

    cin >> n >> koef;

    for (int i = 0; i < n; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        contract = contract && isContract(x1, y1, x2, y2, koef);
    }

    cout << (contract ? "Yes" : "No") << endl;

    return 0;
}
