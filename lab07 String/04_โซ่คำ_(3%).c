#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int l;
    int n;
    scanf("%d", &l);
    scanf("%d", &n);
    char first[l];
    char now[l];
    char prev[l];
    int already = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            scanf("%s", now);
            strcpy(prev, now);
        }
        else
        {
            scanf("%s", now);
            int count = 0;
            for (int j = 0; j < l; j++)
            {
                if (prev[j] != now[j])
                {
                    count++;
                }
            }
            if (count >= 3)
            {
                already = 1;
            }
            if (already == 0)
            {
                strcpy(prev, now);
            }
        }
    }
    printf("%s", prev);
}