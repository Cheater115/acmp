#include <iostream>
using namespace std;


int main()
{
    int length, price;

    cin >> length;

    price = length / 10 + (length % 10 != 0);

    cout << price << endl;

    return 0;
}
