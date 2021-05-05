#include <iostream>
using namespace std;


int sumDigits(int num)
{
    int sum = 0;
    if (num < 0)
        num = -num;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}


int main()
{
    int ticketNum, leftSum, rightSum;

    cin >> ticketNum;

    leftSum = sumDigits(ticketNum / 1000);
    rightSum = sumDigits(ticketNum % 1000);

    if (leftSum == rightSum)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
