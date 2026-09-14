//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>
int main()
{ char ch;
 printf("enter the character: ");
 scanf("%c", &ch);
for (char c='a'; c<='z'; c++)
{
    if (ch==c)
    {
        printf("the character is a lowercase alphabet");
    }
}
for (char c='A'; c<='Z'; c++)
{
    if (c==ch)
    {
        printf("the character is an uppercase alphabet \n");
    }
}
for (char c='0'; c<='9'; c++)
{
    if (c==ch)
    {
        printf("the character is a digit \n");
    }
}
if(ch < '0' || ch > '9' && ch <'A' || ch > 'Z' && ch <'a' || ch > 'z') 
{
    printf("the character is a special character \n");
}
return 0;
}
