//program to see what happens when a signed postive integer overflows, part2 question d)
#include<stdio.h>
int main()
{
signed int a,b,c;
printf("Enter 2 nos: ");
scanf("%d%d",&b,&c);
a = b + c;
if (c < 0 ? a > b : a < b) 
{
    /* overflow */
}
printf("Sum %d",a);
}

