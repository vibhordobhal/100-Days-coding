//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main()
{
    int a, b;
    double sum,diff,prod,quotient;
    printf("enter the two numbers:");
    scanf("%d %d",&a,&b);
    sum =a+b;
    diff=a-b;
    prod=a*b;
    if(b==0)
    {
        printf("division by zero is not possible");
    }
    else
    {
        quotient=a/b;
        printf("sum=%f\ndifference=%f\nproduct=%f\nquotient=%f",sum,diff,prod,quotient);
    }
    return 0;
}