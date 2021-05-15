#include <iostream>
using namespace std;


void swapInt(int& num1, int& num2)
{
    int sw = num1;
    num1 = num2;
    num2 = sw;
}


void sort3(int* box)
{
    if (box[0] > box[1])
        swapInt(box[0], box[1]);
    if (box[1] > box[2])
        swapInt(box[1], box[2]);
    if (box[0] > box[1])
        swapInt(box[0], box[1]);
}

int main()
{
    int box1[3], box2[3];

    cin >> box1[0] >> box1[1] >> box1[2] >> box2[0] >> box2[1] >> box2[2];

    sort3(box1);
    sort3(box2);

    if (box1[0] == box2[0] && box1[1] == box2[1] && box1[2] == box2[2])
        cout << "Boxes are equal" << endl;
    else if (box1[0] <= box2[0] && box1[1] <= box2[1] && box1[2] <= box2[2])
        cout << "The first box is smaller than the second one" << endl;
    else if (box1[0] >= box2[0] && box1[1] >= box2[1] && box1[2] >= box2[2])
        cout << "The first box is larger than the second one" << endl;
    else
        cout << "Boxes are incomparable" << endl;


    return 0;
}
