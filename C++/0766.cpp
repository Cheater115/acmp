#include <iostream>
using namespace std;


int main()
{
    int nCones, nNuts, nNeedNuts;
    
    cin >> nCones >> nNuts >> nNeedNuts;
    
    if (nCones * nNuts >= nNeedNuts)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
