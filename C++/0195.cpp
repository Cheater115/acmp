#include <iostream>
using namespace std;

int main()
{
    int nPanels, widthPanels, heightPanels, sulfide;

    cin >> nPanels >> widthPanels >> heightPanels;
    sulfide = nPanels * 2 * widthPanels * heightPanels;
    cout << sulfide << endl;

    return 0;
}
