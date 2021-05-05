#include <iostream>
using namespace std;


int main()
{
    int nPupils, nApples, appleByPupil, appleInBasket, resentPupil;

    cin >> nPupils >> nApples;

    appleByPupil = nApples / nPupils;
    appleInBasket = nApples % nPupils;
    resentPupil = (nPupils - appleInBasket) % nPupils;

    cout << appleByPupil << " " << appleInBasket << " "
        << resentPupil << endl;

    return 0;
}
