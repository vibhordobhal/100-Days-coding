//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main()
{
    int time,hours,minutes,seconds;
    printf("enter the time in secinds:");
    scanf("%d",&time);
    hours=time/3600;
    minutes=(time%3600)/60;
    seconds=time%60;
    printf("the time in hours:minutes:seconds is: %d:%d:%d\n",hours,minutes,seconds);
    return 0;
}