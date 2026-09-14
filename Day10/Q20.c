/*Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.


Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/
#include <stdio.h>
int main()
{
    int day;
    printf("enter the day number");
    scanf("%d", &day);
    switch(day)
    {
        case 1:
            printf("the day is monday");
            break;
        case 2:
            printf("the day is tuesday");
            break;
        case 3:
            printf("the day is wednesday");
            break;
        case 4:
            printf("the day is thursday");
            break;
        case 5:
            printf("the day is friday");
            break;
        case 6:
            printf("the day is saturday");
            break;
        case 7:
            printf("the day is sunday");
            break;
        default:
            printf("invalid input");
    }
    return 0;
}