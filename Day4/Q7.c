//Q7: Write a program to swap two numbers without using a third variable.
#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the numbers to be swapped:");
    scanf("%d %d", &a, &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the numbers after the swapping are : %d %d\n",a,b);
    return 0;
}