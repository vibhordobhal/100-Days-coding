/*Q21: Write a program to display the month name and number of days using switch-case for a given month number.


Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/
#include <stdio.h>
int main()
{
    int month;
    printf("enter the month number");
    scanf("%d", &month);
    switch(month)
    {
        case 1:
            printf("the month is january, 31 days");
            break;
        case 2:
            printf("the month is february, 28 days");
            break;
        case 3:
            printf("the month is march, 31 days");
            break;
        case 4:
            printf("the month is april, 30 days");
            break;
        case 5:
            printf("the month is may, 31 days");
            break;
        case 6:
            printf("the month is june, 30 days");
            break;
        case 7:
            printf("the month is july, 31 days");
            break;
        case 8:
            printf("the month is august, 31 days");
            break;
        case 9:
            printf("the month is september, 30 days");
            break;
        case 10:
            printf("the month is october, 31 days");
            break;
        case 11:
            printf("the month is november, 30 days");
            break;
        case 12:
            printf("the month is december, 31 days");
            break;
        default:
            printf("invalid input");
    }
    return 0;
}