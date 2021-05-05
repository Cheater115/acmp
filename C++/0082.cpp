#include <stdio.h>
using namespace std;


int main()
{
    char hashTable[100001] = { 0 };
    int nSet1, nSet2, num;

    scanf("%d %d", &nSet1, &nSet2);

    for (int i = 0; i < nSet1; i++)
    {
        scanf("%d", &num);
        hashTable[num] = 1;
    }
    for (int i = 0; i < nSet2; i++)
    {
        scanf("%d", &num);
        if (hashTable[num] == 1)
            hashTable[num] = 2;
    }
    for (int i = 0; i < 100001; i++)
        if (hashTable[i] == 2)
            printf("%d ", i);

    return 0;
}
