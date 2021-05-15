#include <iostream>
#include <cmath>
using namespace std;
 
 
int main()
{
    int sum, mul;
 
    cin >> sum >> mul;
 
    int y = (sum + sqrt(sum * sum - 4 * mul)) / 2;
    int x = sum - y;
 
    if (x < y)
        cout << x << " " << y << endl;
    else
        cout << y << " " << x << endl;
 
    return 0;
}
