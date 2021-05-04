#include <iostream>
using namespace std;


int main()
{
    int num, squreWithOut5;

    cin >> num;
    squreWithOut5 = (num / 10) * (num / 10 + 1);
    if (squreWithOut5)
        cout << squreWithOut5 << "25" << endl;
    else
        cout << "25" << endl;

    return 0;
}
