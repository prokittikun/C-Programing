#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;
    int i = 0;
    while (number != 0)
    {
        if (number % 2 == 0)
        {
            number = number / 2;
        }
        else
        {
            number -= 1;
        }
        i++;
    }
    cout << i;
}