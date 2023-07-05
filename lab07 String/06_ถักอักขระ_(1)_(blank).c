#include <stdio.h>
//String: hello, world
// Output: hdellrloow,  ,woolrlledh
int charcount(char *s)
{
    int i = 0;
    while (1)
    {
        if (s[i] == '\0')
            break;
        i++;
    }
    return i;
   

}

void charweave(char *s,char *result)
{
    

}

int main()
{  char str[100],result[200];

   printf("String: ");
   gets(str);   /* read a line of characters from the input to "str" variable */
   charweave(str,result);
   printf("Output: %s\n",result);
   return 0;
}