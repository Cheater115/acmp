#include <iostream>
using namespace std;


int main()
{
    int x1, y1, x2, y2;
    
    cin >> x1 >> y1 >> x2 >> y2;
    
    if ((x1 + y1) % 2 == (x2 + y2) % 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
