//Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main()
{
    int n, original, first, last, digits = 0;
    int middle, power, result;

    scanf("%d", &n);

    original = n;

    last = n % 10;

    while (n > 0)
    {
        digits++;
        n = n / 10;
    }

    power = 1;

    for (int i = 1; i < digits; i++)
    {
        power = power * 10;
    }

    first = original / power;

    middle = original % power;
    middle = middle / 10;

    result = last * power + middle * 10 + first;

    printf("%d", result);

    return 0;
}