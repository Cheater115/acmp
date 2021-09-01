#include <iostream>
using namespace std;


int main()
{
    char num[101];
    bool was[1000] = { 0 };
    int cnt = 0;

    cin >> num;

    for (int d1 = 0; num[d1] != '\0'; d1++)
    {
        for (int d2 = d1 + 1; num[d2] != '\0'; d2++)
        {
            for (int d3 = d2 + 1; num[d3] != '\0'; d3++)
            {
                int digit1 = (num[d1] - '0');
                int digit2 = (num[d2] - '0');
                int digit3 = (num[d3] - '0');
                was[digit1 * 100 + digit2 * 10 + digit3] = true;
            }
        }
    }

    for (int i = 100; i <= 999; i++)
        cnt += was[i];

    cout << cnt << endl;

    return 0;
}
