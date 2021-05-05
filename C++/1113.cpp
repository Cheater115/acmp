#include <iostream>
using namespace std;


int main()
{
    int num1, num2;
    
    cin >> num1 >> num2;

    if (num1 % num2 == 0 || num2 % num1 == 0)
        cout << "1" << endl;
    else
        cout << "10" << endl;

    return 0;
}
