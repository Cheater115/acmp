#include <iostream>
using namespace std;


bool isEqualStr(const char* s1, const char* s2)
{
    while (*s1 != 0 && *s2 != 0 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return (*s1 == 0 && *s2 == 0);
}


int main()
{
    char section1[10], section2[10], section3[10];
    cin >> section1 >> section2 >> section3;

    if (isEqualStr(section1, "black")
        && isEqualStr(section2, "YELLOW")
        && isEqualStr(section3, "black"))
        cout << "black" << endl << "YELLOW" << endl << "black" << endl;
    else if (isEqualStr(section1, "black")
        && isEqualStr(section2, "black")
        && isEqualStr(section3, "green"))
        cout << "black" << endl << "black" << endl << "GREEN" << endl;
    else if (isEqualStr(section1, "black")
        && isEqualStr(section2, "black")
        && isEqualStr(section3, "GREEN"))
        cout << "black" << endl << "yellow" << endl << "black" << endl;
    else if (isEqualStr(section1, "black")
        && isEqualStr(section2, "yellow")
        && isEqualStr(section3, "black"))
        cout << "red" << endl << "black" << endl << "black" << endl;
    else if (isEqualStr(section1, "red")
        && isEqualStr(section2, "black")
        && isEqualStr(section3, "black"))
        cout << "red" << endl << "yellow" << endl << "black" << endl;
    else if (isEqualStr(section1, "red")
        && isEqualStr(section2, "yellow")
        && isEqualStr(section3, "black"))
        cout << "black" << endl << "black" << endl << "green" << endl;
    else
        cout << "error" << endl;

    return 0;
}
