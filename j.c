//faster version of (h), part2 question j)
#include<stdio.h>
int main()
{
int n,count=0;
printf("Enter binary val:");
scanf("%d",&n);
while(n!=0){
  n = n&(n-1);
  count++;
}
printf("Number of 1's is:%d and no.of 0's is %d",count,32-count);
}
