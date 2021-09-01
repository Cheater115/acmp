#include <iostream>
using namespace std;


int main()
{
    char keyboard[] = "qwertyuiopasdfghjklzxcvbnmq";
    char letter;

    cin >> letter;

    for (int i = 0; keyboard[i] != '0'; i++)
    {
        if (keyboard[i] == letter)
        {
            cout << keyboard[i + 1] << endl;
            break;
        }
    }

    return 0;
}
