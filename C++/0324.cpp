#include <iostream>
using namespace std;


int main()
{
    int num;

    cin >> num;

    if (num / 1000 == num % 10 && num / 100 % 10 == num % 100 / 10)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
