#include <iostream>
using namespace std;


bool hasOneDiff(char* s1, char* s2)
{
    int cntDiff = 0, pos = 0;
    for (; s1[pos] != '\0' && s2[pos] != 0; pos++)
    {
        cntDiff += (s1[pos] != s2[pos]);
    }
    return (s1[pos] == '\0' && s2[pos] == '\0' && cntDiff == 1);

}


int main()
{
    int nNames, nWords;
    char names[30][31], words[30][31];

    cin >> nNames;
    for (int i = 0; i < nNames; i++)
        cin >> names[i];
    cin >> nWords;
    for (int i = 0; i < nWords; i++)
        cin >> words[i];

    for (int i = 0; i < nNames; i++)
    {
        int cnt = 0;
        for (int j = 0; j < nWords; j++)
        {
            cnt += hasOneDiff(names[i], words[j]);
        }
        cout << cnt << " ";
    }
    cout << endl;

    return 0;
}
