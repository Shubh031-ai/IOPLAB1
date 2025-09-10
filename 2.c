#include<stdio.h>

int main()
{
    int iop,iocs,maths,eee,eng,sum;
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
    
    printf("\nTotal marks are %d", sum);
    printf("\n Percentage %f", sum*0.2);
}