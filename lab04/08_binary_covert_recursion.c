#include <stdio.h>
#include <stdlib.h>

long int convert(int n){
  if(n == 0) return 0;
  return n % 2 + 10 * (convert(n / 2));
}

int main() {
  char nTemp[10];
  int n = 0;
  fgets(nTemp, 10, stdin);
  n = atoi(nTemp);
  printf("%ld", convert(n));
}