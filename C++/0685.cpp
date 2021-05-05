#include <iostream>
using namespace std;


int mid3(int num1, int num2, int num3)
{
    if ((num2 <= num1 && num1 <= num3) || (num3 <= num1 && num1 <= num2))
        return num1;
    if ((num1 <= num2 && num2 <= num3) || (num3 <= num2 && num2 <= num1))
        return num2;
    return num3;
}


int max3(int num1, int num2, int num3)
{
    int res = num1;
    if (num2 > res)
        res = num2;
    if (num3 > res)
        res = num3;
    return res;
}


int min3(int num1, int num2, int num3)
{
    int res = num1;
    if (num2 < res)
        res = num2;
    if (num3 < res)
        res = num3;
    return res;
}


int main()
{
    int price1, price2, price3, volume1, volume2, volume3;

    cin >> price1 >> price2 >> price3
        >> volume1 >> volume2 >> volume3;

    int maxPrice = max3(price1, price2, price3);
    int minPrice = min3(price1, price2, price3);
    int midPrice = mid3(price1, price2, price3);

    int maxVolume = max3(volume1, volume2, volume3);
    int minVolume = min3(volume1, volume2, volume3);
    int midVolume = mid3(volume1, volume2, volume3);

    int money = maxPrice * maxVolume + minPrice * minVolume
        + midPrice * midVolume;

    cout << money << endl;

    return 0;
}
