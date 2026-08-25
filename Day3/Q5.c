//Q5: Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main()
{
    double tempc,tempf;
    printf("enter the the temoerature in celcius:");
    scanf("%lf", &tempc);
    tempf=(tempc*9/5)+32;
    printf("the temperature in fahrenheit is : %lf\n",tempf);
    return 0;
}