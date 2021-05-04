#include <iostream>
using namespace std;


int main()
{
    int num;
    cin >> num;
    while ((num & 1) == 0 && num > 0)
        num >>= 1;
    cout << (num == 1 ? "YES" : "NO") << endl;
    return 0;
}
