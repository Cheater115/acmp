#include <iostream>
using namespace std;

int main()
{
    int firstTeam = 0, secondTeam = 0;
    int points1, points2;

    for (int i = 0; i < 4; i++)
    {
        cin >> points1 >> points2;
        firstTeam += points1;
        secondTeam += points2;
    }

    if (firstTeam > secondTeam)
        cout << "1" << endl;
    else if (firstTeam < secondTeam)
        cout << "2" << endl;
    else
        cout << "DRAW" << endl;

    return 0;
}
