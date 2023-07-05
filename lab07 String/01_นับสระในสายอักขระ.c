#include <stdio.h>

int main()
{
    char word[20];
    printf("String (without a space): ");
    scanf("%s", word);
    int i = 0;
    int vowelCount = 0;
    while (1)
    {
        if (word[i] == '\0')
            break;
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' ||
            word[i] == 'u' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' ||
            word[i] == 'O' || word[i] == 'U')
        {
            printf("%c ", word[i]);
            vowelCount++;
        }
       

        i++;
    }
    
    if (vowelCount < 2)
    {
        printf("\nThis string contains %d vowel.", vowelCount);
    }
    else
    {
        printf("\nThis string contains %d vowels.", vowelCount);
    }
}