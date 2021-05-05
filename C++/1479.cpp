#include <iostream>
using namespace std;


int main()
{
    long long num1, num2, mod;

    cin >> num1 >> num2;

    mod = num1 % num2;

    if (mod < 0)
        mod += (num2 > 0) ? num2 : -num2;

    cout << mod << endl;

    return 0;
}
