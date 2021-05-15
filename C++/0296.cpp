#include <iostream>
using namespace std;


int main()
{
    int price, basilio, alica;

    cin >> price;

    basilio = price / 5;
    if ((price - basilio * 5) % 3 == 1)
        basilio--;
    else if ((price - basilio * 5) % 3 == 2)
        basilio -= 2;
    alica = (price - basilio * 5) / 3;

    cout << basilio << " " << alica << endl;

    return 0;
}
