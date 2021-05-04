#include <iostream>
using namespace std;


int main()
{
    int firstDigit, secondDigit, thirdDigit, num;

    cin >> firstDigit;
    secondDigit = 9;
    thirdDigit = 9 - firstDigit;

    num = firstDigit * 100 + secondDigit * 10 + thirdDigit;
    cout << num << endl;

    return 0;
}
