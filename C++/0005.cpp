#include <iostream>
using namespace std;


int main()
{
    int days[100], nDays, mark4 = 0, mark3 = 0;

    cin >> nDays;
    for (int i = 0; i < nDays; i++)
        cin >> days[i];

    for (int i = 0; i < nDays; i++)
        if (days[i] % 2 == 1)
        {
            cout << days[i] << " ";
            mark3++;
        }
    cout << endl;

    for (int i = 0; i < nDays; i++)
        if (days[i] % 2 == 0)
        {
            cout << days[i] << " ";
            mark4++;
        }
    cout << endl;

    cout << (mark4 >= mark3 ? "YES" : "NO") << endl;

    return 0;
}
