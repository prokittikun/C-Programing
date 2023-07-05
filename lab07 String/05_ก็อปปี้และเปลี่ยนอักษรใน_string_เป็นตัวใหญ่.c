#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define static "use malloc"

char *stoupper(const char *s)
{
    char *answer = (char *)malloc(sizeof(char) * sizeof(s));
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        answer[i] = toupper(s[i]);
    }
    answer[i] = '\0';
    return answer;
}

int main()
{
    char s[100];
    char *result;

    scanf("%s", s);
    result = stoupper(s);
    if (result == s)
        printf("ERROR.\n");
    printf("%s\n", result);
}