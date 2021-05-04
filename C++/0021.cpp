#include <iostream>
using namespace std;


int main()
{
    int salary1, salary2, salary3, maxSalary, minSalary;

    cin >> salary1 >> salary2 >> salary3;

    maxSalary = salary1;
    if (salary2 > maxSalary)
        maxSalary = salary2;
    if (salary3 > maxSalary)
        maxSalary = salary3;

    minSalary = salary1;
    if (salary2 < minSalary)
        minSalary = salary2;
    if (salary3 < minSalary)
        minSalary = salary3;

    cout << maxSalary - minSalary << endl;

    return 0;
}
