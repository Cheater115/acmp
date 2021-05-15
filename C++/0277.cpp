#include <iostream>
using namespace std;


int main()
{
    int a, b, c;
    bool isFirst = true;

    cin >> a >> b >> c;

    if (a != 0)
    {
        cout << a;
        isFirst = false;
    }
    if (b != 0)
    {
        if (b < -1)
            cout << b << "x";
        else if (b == -1)
            cout << "-x";
        else if (b > 1)
            cout << (isFirst ? "" : "+") << b << "x";
        else
            cout << (isFirst ? "" : "+") << "x";
        isFirst = false;
    }
    if (c != 0)
    {
        if (c < -1)
            cout << c << "y";
        else if (c == -1)
            cout << "-y";
        else if (c > 1)
            cout << (isFirst ? "" : "+") << c << "y";
        else
            cout << (isFirst ? "" : "+") << "y";
        isFirst = false;
    }
    if (isFirst)
        cout << "0";
    cout << endl;

    return 0;
}
