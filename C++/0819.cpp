#include <iostream>
using namespace std;

int main()
{
    long long int length, width, height, area, volume;

    cin >> length >> width >> height;

    area = (length * width + length * height + width * height) * 2;
    volume = length * width * height;

    cout << area << " " << volume << endl;

    return 0;
}
