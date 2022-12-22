#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input_a[7], input_b[7];
    fgets(input_a, 7, stdin);
    fgets(input_b, 7, stdin);
    long long a, b, gcd, aTemp, bTemp;
    a = atoll(input_a);
    b = atoll(input_b);
    aTemp = a;
    bTemp = b;
    long long r = a % b;
    while (r != 0){
        a = b;
        b = r;
        r = a % b;
    }
    gcd = b;
    for (int i = 1; i <= gcd; i++){
        if ((gcd * i) == aTemp){
            aTemp = i;
        }
        if ((gcd * i) == bTemp){
            bTemp = i;
        }
    }
    if (bTemp == 1){
        printf("= %d", aTemp);
    }
    else{
        printf("= %d/%d", aTemp, bTemp);
    }
}