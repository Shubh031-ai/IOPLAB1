#include<stdio.h>

int main()
{
    int iop,iocs,maths,eee,eng,sum;
    float percentage;
    printf("Enter marks in IOP ");
    scanf("%d",&iop);

    printf("Enter marks in IOCS ");
    scanf("%d",&iocs);
    
    printf("Enter marks in Maths ");
    scanf("%d",&maths);
    
    printf("Enter marks in EEE ");
    scanf("%d",&eee);
    
    printf("Enter marks in Eng ");
    scanf("%d",&eng);
    
    sum = iocs + iop + maths + eee + eng;
    percentage = sum*0.2;
    
    printf("\nTotal marks are %d", sum);
    printf("\n Percentage %f", percentage);

    if (percentage >= 90 && percentage <= 100) 
        {
            printf("Grade: A\n");
        }
    else if (percentage >= 80) 
        {
            printf("Grade: B\n");
        }
    else if (percentage >= 70) 
        {
            printf("Grade: C\n");
        }
    else if (percentage >= 60) 
        {
            printf("Grade: D\n");
        }
    else if (percentage >= 50) 
        {
            printf("Grade: E\n");
        }
}