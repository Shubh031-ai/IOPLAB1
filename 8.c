#include <stdio.h>

int main() 
{
    int seconds = 31558150;
    int days, hrs, mins;

    days = seconds / (24 * 3600);
    seconds = seconds % (24 * 3600);

    hrs = seconds / 3600;
    seconds = seconds % 3600;

    mins = seconds / 60;
    seconds = seconds % 60;

    printf("\nEquivalent time: %d days, %d hours, %d minutes, %d seconds",days, hrs, mins, seconds);
}

