//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main()
{
    double radius,area,circumference;
    printf("enter the radius of the circle: ");
    scanf ("%lf", &radius);
    area=3.14*radius*radius;
    printf("the area of the circle is : %lf\n",area);
    circumference=2*3.14*radius;
    printf("the circumference of the circle is : %lf\n",circumference);
    return 0;
}