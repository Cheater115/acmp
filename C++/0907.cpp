#include <iostream>
using namespace std;


int main()
{
    int widthMat1, heightMat1, radiusMat2;

    cin >> widthMat1 >> heightMat1 >> radiusMat2;

    if (radiusMat2 * 2 <= widthMat1 && radiusMat2 * 2 <= heightMat1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
