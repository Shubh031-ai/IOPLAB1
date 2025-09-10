#include <stdio.h>

int main() 
{
    int seconds, hrs, mins;

    printf("Enter total seconds: ");
    scanf("%d", &seconds);

    hrs = seconds / 3600;                
    seconds = seconds % 3600;

    mins = seconds / 60;                
    seconds = seconds % 60;

    printf("\n Hours: %d, Minutes: %d, Seconds: %d",hrs, mins, seconds);

}
