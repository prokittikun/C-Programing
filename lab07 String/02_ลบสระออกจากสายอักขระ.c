#include <stdio.h>

int remove_vowel(char *str)
{
    int i = 0;
    int j = 0;
    while (1)
    {
        if (str[i] == '\0')
            break;
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||
            str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U')
        {
            i++;
            continue;
        }
        str[j] = str[i];
        i++;
        j++;
    }
    str[j] = '\0';
}

int main()
{
    char str[80];

    printf(" Input: ");
    gets(str);
    remove_vowel(str);
    printf("Output: %s\n", str);
    return 0;
}