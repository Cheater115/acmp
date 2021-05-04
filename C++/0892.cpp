#include <iostream>
using namespace std;


int main()
{
    int nMonth;

    cin >> nMonth;

    if (nMonth <= 0 || nMonth > 12)
        cout << "Error" << endl;
    else if (nMonth <= 2 || nMonth == 12)
        cout << "Winter" << endl;
    else if (nMonth <= 5)
        cout << "Spring" << endl;
    else if (nMonth <= 8)
        cout << "Summer" << endl;
    else
        cout << "Autumn" << endl;

    return 0;
}
