#include <iostream>
using namespace std;


bool hasError(char* moves)
{
    if (moves[0] < 'A' || moves[0] > 'H')
        return true;
    if (moves[1] < '1' || moves[1] > '8')
        return true;
    if (moves[2] != '-')
        return true;
    if (moves[3] < 'A' || moves[3] > 'H')
        return true;
    if (moves[4] < '1' || moves[4] > '8')
        return true;
    return false;
}


int main()
{
    char moves[6] = { 0 };

    cin >> moves;

    if (hasError(moves))
    {
        cout << "ERROR" << endl;
        return 0;
    }

    int dx = moves[0] - moves[3];
    if (dx < 0)
        dx = -dx;
    int dy = moves[1] - moves[4];
    if (dy < 0)
        dy = -dy;
    if ((dx == 2 && dy == 1) || (dx == 1 && dy == 2))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
