//Program for counting 1's in binary number, part1 question i)
#include<stdio.h>
int main()
{
    unsigned int iValue,oValue;
    int CountOnes(unsigned int);
    printf("Please Enter value  : ");
    scanf("%u",&iValue);
    oValue = CountOnes(iValue);
    printf("\nThe Number has \"%d\" 1's ",oValue);
}
int CountOnes(unsigned int val)
{
    unsigned int i, count = 0;
    for(i = 0; i < 32 ; i++)
    {
        if (val % 2 != 0)
            count++;
        val = val >> 1;
    }

    return count;
}
