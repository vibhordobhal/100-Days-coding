//Q17: Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,root1,root2;
    printf("enter the coefficients a,b and c for the equation");
    scanf("%lf%lf%lf",&a,&b,&c);
    double D=b*b-4*a*c;
    if(D>0)
    {
        root1=(-b+sqrt(D))/(2*a);
        root2=(-b-sqrt(D))/(2*a);
        printf("the roots are real and distinct\n");
        printf("root1=%.2lf\n",root1);
        printf("root2=%.2lf\n",root2);
        
    }
    else if(D==0)
    {
        root1=root2=-b/(2*a);
        printf("the roots are real and equal\n");
        printf("root1=root2=%.2lf\n",root1);
    }
    else
    {
        double realPart=-b/(2*a);
        double imagPart=sqrt(-D)/(2*a);
        printf("the roots are complex and imaginary\n");
        printf("root1=%.2lf+%.2lfi\n",realPart,imagPart);
        printf("root2=%.2lf-%.2lfi\n",realPart,imagPart);
    }
    return 0;
}