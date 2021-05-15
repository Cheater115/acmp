#include <iostream>
using namespace std;


int main()
{
    int length1, width1, height1;
    int length2, width2, height2;
    int lengthC, widthC, heightC;

    cin >> length1 >> width1 >> height1
        >> length2 >> width2 >> height2
        >> lengthC >> widthC >> heightC;

    if (height1 > heightC || (width1 > widthC && width1 > lengthC)
      || (length1 > widthC && length1 > lengthC)
      || height2 > heightC || (width2 > widthC && width2 > lengthC)
      || (length2 > widthC && length2 > lengthC))
    {
        cout << "NO" << endl;
    }
    else if ((height1 + height2 <= heightC)
      || (length1 + length2 <= lengthC && width1 <= widthC && width2 <= widthC)
      || (length1 + width2 <= lengthC && width1 <= widthC && length2 <= widthC)
      || (width1 + length2 <= lengthC && length1 <= widthC && width2 <= widthC)
      || (width1 + width2 <= lengthC && length1 <= widthC && length2 <= widthC)
      || (length1 + length2 <= widthC && width1 <= lengthC && width2 <= lengthC)
      || (length1 + width2 <= widthC && width1 <= lengthC && length2 <= lengthC)
      || (width1 + length2 <= widthC && length1 <= lengthC && width2 <= lengthC)
      || (width1 + width2 <= widthC && length1 <= lengthC && length2 <= lengthC))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
