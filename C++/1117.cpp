#include <iostream>
using namespace std;


int main()
{
    int lessonNum, minutes, hours;

    cin >> lessonNum;

    minutes = lessonNum * 45 + lessonNum / 2 * 5 + (lessonNum - 1) / 2 * 15;

    hours = 9 + minutes / 60;
    minutes %= 60;

    cout << hours << " " << minutes << endl;

    return 0;
}
