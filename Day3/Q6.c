//Q6: Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main()
{
    int a,b,t;
    printf("enter the two numbers to be swapped: ");
    scanf("%d %d",&a,&b);
    t=a;
    a=b;
    b=t;
    printf("the numbers after swapping are : %d %d\n",a,b);
    return 0;
}