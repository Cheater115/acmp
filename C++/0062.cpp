#include <iostream>
using namespace std;


int main()
{
    char cell[3];

    cin >> cell;

    int points = cell[0] - 'A' + 1 + cell[1] - '0';

    if (points % 2 == 0)
        cout << "BLACK" << endl;
    else
        cout << "WHITE" << endl;

    return 0;
}
