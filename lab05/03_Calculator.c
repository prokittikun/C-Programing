#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculator(float currentValue, float value, char op)
{
    if (op == '+')
        return currentValue + value;
    else if (op == '-')
        return currentValue - value;
    else if (op == '*')
        return currentValue * value;
    else if (op == '/')
        return currentValue / value;
}
int main()
{
    double n = 0.0000;
    printf("Initial Value: ");
    scanf("%lf", &n);
    for (int i = 0; i == i; i++)
    {
        printf("\n");
        char op;
        printf("Operator: ");
        scanf("%s", &op);
        if (op == '+' || op == '-' || op == '*' || op == '/')
        {
            double value = 0.0;
            printf("Input Value: ");
            scanf("%lf", &value);

            n = calculator(n, value, op);
            printf("Present Value is %.4lf \n", n);
        }
        else
        {
            break;
        }
    }

    printf("\nFinish Calculation. Final Value is %.4lf", n);
}