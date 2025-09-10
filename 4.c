#include <stdio.h>

int main()
{
    float deg_f, deg_c;
    printf("Enter temperature in fahrenheit: ");
    scanf("%f",&deg_f);

    deg_c = 0.556*(deg_f-32);
    printf("\n Temperature in celcius is: %f",deg_c);
}