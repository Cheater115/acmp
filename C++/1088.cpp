#include <iostream>
using namespace std;


bool canRook(int x1, int y1, int x2, int y2)
{
    return x1 == x2 || y1 == y2;
}


bool canBishop(int x1, int y1, int x2, int y2)
{
    int dx = x1 - x2;
    int dy = y1 - y2;

    if (dx < 0)
        dx = -dx;
    if (dy < 0)
        dy = -dy;

    return dx == dy;
}


bool canKnight(int x1, int y1, int x2, int y2)
{
    int dx = x1 - x2;
    int dy = y1 - y2;

    if (dx < 0)
        dx = -dx;
    if (dy < 0)
        dy = -dy;

    return (dx == 2 && dy == 1) || (dx == 1 && dy == 2);
}


bool canQueen(int x1, int y1, int x2, int y2)
{
    int dx = x1 - x2;
    int dy = y1 - y2;

    if (dx < 0)
        dx = -dx;
    if (dy < 0)
        dy = -dy;

    return x1 == x2 || y1 == y2 || dx == dy;
}


bool canKing(int x1, int y1, int x2, int y2)
{
    int dx = x1 - x2;
    int dy = y1 - y2;

    if (dx < 0)
        dx = -dx;
    if (dy < 0)
        dy = -dy;

    return (x1 == x2 && dy == 1) || (y1 == y2 && dx == 1)
                                || (dx == dy && dx == 1);
}


bool canPawn(int x1, int y1, int x2, int y2)
{
    int dx = x2 - x1;
    int dy = y2 - y1;

    return y1 > 1 && dx == 0 && (dy == 1 || (dy == 2 && y1 == 2));
}


int main()
{
    char coord1[3], coord2[3];
    int x1, y1, x2, y2;
    bool hasFigure = false;

    cin >> coord1 >> coord2;

    x1 = coord1[0] - 'A' + 1;
    y1 = coord1[1] - '0';
    x2 = coord2[0] - 'A' + 1;
    y2 = coord2[1] - '0';

    if (canRook(x1, y1, x2, y2))
    {
        hasFigure = true;
        cout << "Rook" << endl;
    }
    if (canBishop(x1, y1, x2, y2))
    {
        hasFigure = true;
        cout << "Bishop" << endl;
    }
    if (canKnight(x1, y1, x2, y2))
    {
        hasFigure = true;
        cout << "Knight" << endl;
    }
    if (canQueen(x1, y1, x2, y2))
    {
        hasFigure = true;
        cout << "Queen" << endl;
    }
    if (canKing(x1, y1, x2, y2))
    {
        hasFigure = true;
        cout << "King" << endl;
    }
    if (canPawn(x1, y1, x2, y2))
    {
        hasFigure = true;
        cout << "Pawn" << endl;
    }
    if (!hasFigure)
        cout << "Nobody" << endl;

    return 0;
}
