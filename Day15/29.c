//Q29: Write a program to calculate the factorial of a number.
#include <stdio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact *= i;
    }
    printf("The factorial of %d is: %d",n,fact);
    return 0;
}