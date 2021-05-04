#include <iostream>
using namespace std;


int main()
{
    int nNums, * nums;

    cin >> nNums;
    nums = new int[nNums];
    for (int i = 0; i < nNums; i++)
        cin >> nums[i];

    for (int i = nNums - 1; i >= 0; i--)
        cout << nums[i] << " ";
    cout << endl;

    delete[] nums;
    return 0;
}
