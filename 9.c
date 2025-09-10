#include <stdio.h>

int main()
{
    int hrs, mins, seconds, t_seconds;

    printf("Enter hours: ");
    scanf("%d",&hrs);

    printf("Enter minutes: ");
    scanf("%d",&mins);

    printf("Enter second: ");
    scanf("%d",&seconds);

    t_seconds = hrs*3600 + mins*60 + seconds;
    printf("\n Equivalent time in seconds is: %d",t_seconds);

}