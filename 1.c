#include <stdio.h>

int main()
{
    float principal_amt, rate, time, si;

    printf("Enter principal amount: ");
    scanf("%f", &principal_amt);

    printf("Enter rate: ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);

    si = principal_amt * rate * time * 0.01;

    printf("Simple interest is: %f\n", si);
}
