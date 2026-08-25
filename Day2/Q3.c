//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main()
{
    int length,breadth;
    printf("enter the length and breadth of the rectangle: ");
    scanf("%d %d",&length,&breadth);
    int area=length*breadth;
    printf("the area of the rectangle is : %d\n",area);
   int perimeter=2*(length+breadth);
   printf("the perimeter of  the rectangle is : %d \n",perimeter);
    return 0;
}
