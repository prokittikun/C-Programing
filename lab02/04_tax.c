#include <stdio.h>
#include <stdlib.h>

int main(){
    char salaryTemp[20];
    fgets(salaryTemp, 10, stdin);
    double salary = 0;
    salary = atof(salaryTemp);
    float tax = 0;
    if(salary >= 0 ){
        if(salary <= 300000){
            tax = salary*5/100;
        }else{
            salary -= 300000;
            float tax1 = 300000*5/100; 
            float tax2 = salary*10/100;
            tax = tax1+tax2;
        }
        printf("%0.2f", tax);
    }else{
        printf("Error: Salary must be greater or equal to 0");
    }
    return 0;
}