#include <iostream>
using namespace std;


int main()
{
    int n, sumArithProg;
    cin >> n;
    if (n > 0)
        sumArithProg = (1 + n) * n / 2;
    else
        sumArithProg = (1 + n) * (-n + 2) / 2;
    cout << sumArithProg << endl;
    return 0;
}
