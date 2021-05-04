#include <iostream>
using namespace std;

void swapInt(int& a, int& b)
{
    int c = a;
    a = b;
    b = c;
}

void bubbleSort(int* arr, int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swapInt(arr[j], arr[j + 1]);
}

void reverseArray(int* arr, int n)
{
    for (int i = 0; i < n / 2; i++)
        swapInt(arr[i], arr[n - 1 - i]);
}

int getKoef(int* times, int nProblems, int timeLimit)
{
    int cnt = 0;
    int penalty = 0;
    int time = 0;

    for (int i = 0; i < nProblems; i++)
    {
        if (time + times[i] > timeLimit)
            break;
        cnt++;
        time += times[i];
        penalty += time;
    }

    return (cnt + 1) * 10000 - penalty;
}

int main()
{
    int timeLimit = 300;
    int times[10], nProblems;
    int koef1, koef3, koef5;

    cin >> nProblems;
    for (int i = 0; i < nProblems; i++)
        cin >> times[i];

    koef5 = getKoef(times, nProblems, timeLimit);
    reverseArray(times, nProblems);
    koef3 = getKoef(times, nProblems, timeLimit);
    bubbleSort(times, nProblems);
    koef1 = getKoef(times, nProblems, timeLimit);

    if (koef1 >= koef3 && koef1 >= koef3)
        cout << 1 << endl;
    else if (koef3 >= koef5)
        cout << 3 << endl;
    else
        cout << 5 << endl;

    return 0;
}
