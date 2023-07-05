#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int scan[n];
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> scan[i];
        if (max == 0 || max < scan[i])
        {
            max = scan[i];
        }
    }
    sort(scan, scan + n);
    int even[n] = {0};
    int odd[n] = {0};
    int e = 0, o = 0;
    for (int i = 0, j = 0; i < max; i++)
    {

        if (scan[j] != i + 1)
        {
            if ((i + 1) % 2 == 0)
            {
                even[e] = i + 1;
                e++;
            }
            else
            {
                odd[o] = i + 1;
                o++;
            }
        }
        else
        {
            j++;
        }
    }
    int i = 0;
    while (i < o)
    {
        cout << odd[i] << " ";
        i++;
    }
    cout << endl;
    int j = 0;
    while (j < e)
    {
        cout << even[j] << " ";
        j++;
    }
}