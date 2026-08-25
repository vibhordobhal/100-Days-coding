//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
int main()
{
    double principal,rate,time,si,ci;
    printf("enter the principal,time and rate");
    scanf("%lf %lf %lf",&principal,&rate,&time);
    si=(principal*rate*time)/100;
    ci=principal*(pow((1+rate/100),time))-principal;
    printf("the simple interest is: %lf\n",si);
    printf("the compound interest is :%lf\n",ci);
    return 0;

}