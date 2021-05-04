#include <iostream>
using namespace std;

int main()
{
    int num1, num2, res;

    cin >> num1 >> num2 >> res;

    if (num1 * num2 == res)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
