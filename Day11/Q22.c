//Q22: Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main()
{
    double cp,sp,profit,loss,percentage;
    printf("enter the cost price and the selling price of the product");
    scanf("%lf%lf",&cp,&sp);
    if(sp>cp)
    {
        profit=sp-cp;
        percentage=(profit/cp)*100;
        printf("the profit is %.2lf and the profit percentage is %.2lf%%",profit,percentage);
    }
    else if(cp>sp)
    {
        loss=cp-sp;
        percentage=(loss/cp)*100;
        printf("the loss is %.2lf and the loss percentage is %.2lf%%",loss,percentage);
    }
    else
    {
        printf("no profit no loss");
    }
}