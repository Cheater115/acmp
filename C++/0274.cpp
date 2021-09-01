#include <iostream>
using namespace std;


bool isSameDigits(char* num1, char* num2)
{
    char digits[10] = { 0 };

    for (int i = 0; num1[i] != '\0'; i++)
        digits[num1[i] - '0'] = 1;
    for (int i = 0; num2[i] != '\0'; i++)
        if (digits[num2[i] - '0'] == 0)
            return false;
        else
            digits[num2[i] - '0'] = 2;
    for (int i = 0; i < 10; i++)
        if (digits[i] == 1)
            return false;

    return true;
}


int main()
{
    int nTests;
    char num1[10], num2[10];

    cin >> nTests;
    for (int i = 0; i < nTests; i++)
    {
        cin >> num1 >> num2;
        if (isSameDigits(num1, num2))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
