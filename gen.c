#include <stdio.h>
#include <stdlib.h>

char *generate(int n){
    int *p = &n;
    printf("%p", *p);
    
}

int main(){
    char *word = generate(8);
    // printf("[%s]\n", word);
    // printf("[%s]\n", generate(3));
}