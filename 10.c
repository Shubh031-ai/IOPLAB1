#include <stdio.h>

int main()
{
    float maths, chem, phy, e_exam, cm;

    printf("Marks in Maths out of 200: ");
    scanf("%f",&maths);

    printf("Marks in Chemistry out of 200: ");
    scanf("%f",&chem);

    printf("Marks in Physics out of 200: ");
    scanf("%f",&phy);

    printf("Marks in entrance exam out of 100: ");
    scanf("%f",&e_exam);

    cm = (maths / 2) + (chem / 2) + (phy / 2) + e_exam;
    printf("\n Cut off marks = %f",cm);
}