//Q30: Write a program to reverse a given number.
#include <stdio.h>
int main()
{
    int n, reversed = 0, remainder;
    printf("Enter the number to be reversed: ");
    scanf("%d", &n);
    while (n != 0)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    printf("The reversed number is: %d", reversed);
    return 0;
}   