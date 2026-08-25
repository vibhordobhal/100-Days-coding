//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the integer:");
    scanf("%d",&num);
    if(num>0)
    {
        printf("Positive");
    }
    else
    {
        if(num<0)
        {
            printf("Negative");
        }
        else
        {
            printf("Zero");
        }
    }
    return 0;
}