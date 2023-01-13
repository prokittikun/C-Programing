#include <stdio.h>
#include <math.h>

void pythagorean(int n){
  int A = 0, B = 0, C = 0;
   for(int i = (n/2); i > 4; --i){
    for(int j = (i-1); j > 3; --j){
      A = sqrt((i*i)-(j*j));
      if(A*A+j*j == i*i && i+j+A == n){
        A = sqrt((i*i)-(j*j));
        B = j;
        C = i;
        printf("(%d, %d, %d)", A, B, C);
        return;
      }
    }
  }
  printf("No triple found.");
  return;
}

int main() {
  int A = 0, B = 0, C = 0;
  int check = 0;
  int n = 0;
  scanf("%d", &n);
  pythagorean(n);
}
  