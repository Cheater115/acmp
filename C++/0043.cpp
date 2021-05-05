#include <iostream>
using namespace std;


int main()
{
    char binSeq[101];
    int maxZeroSeq = 0, curZeroSeq = 0;

    cin.getline(binSeq, 100);

    for (int i = 0; binSeq[i] != 0; i++)
    {
        if (binSeq[i] == '1')
        {
            maxZeroSeq = (maxZeroSeq >= curZeroSeq) ? maxZeroSeq : curZeroSeq;
            curZeroSeq  = 0;
        }
        else
            curZeroSeq++;
    }
    maxZeroSeq = (maxZeroSeq >= curZeroSeq) ? maxZeroSeq : curZeroSeq;

    cout << maxZeroSeq << endl;

    return 0;
}
