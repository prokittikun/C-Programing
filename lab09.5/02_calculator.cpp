#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char name[20];
    cin >> name;
    float salary;
    float cost;
    float profit;
    char buffer[50];
    cin >> salary;
    for (int i = 0; i < 12; i++)
    {
        cin >> cost;
        profit += (15 * cost / 100);
    }
    float x = profit + salary * 12;
    sprintf(buffer, "%s %.2f", name, x);
    cout << buffer;
}