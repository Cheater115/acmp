#include <iostream>
using namespace std;


int main()
{
    int fieldRadius, ufoRadius1, ufoRadius2;

    cin >> fieldRadius >> ufoRadius1 >> ufoRadius2;

    if (ufoRadius1 + ufoRadius2 <= fieldRadius)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
