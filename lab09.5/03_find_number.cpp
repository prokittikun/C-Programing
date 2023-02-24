#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int scan[n+1];
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> scan[i];
        if(max == 0 || max < scan[i]){
            max = scan[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(i != scan[i]){

        }
    }
    
}