#include <stdio.h>
#include <stdlib.h>

int main(){
    char numStr[10];
    fgets(numStr, 10, stdin);
    int num = atoi(numStr);

    for(int i = num;i >= 0;i--){
        printf("%d\n", i);
    }
}