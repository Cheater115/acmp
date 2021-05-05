#include <iostream>
using namespace std;


int main()
{
    int x, y;
    
    cin >> x >> y;
    
    if (x == 1 && y == 1)
        cout << "0" << endl;
    else if (x == y)
        cout << "2" << endl;
    else
        cout << "1" << endl;

    return 0;
}
