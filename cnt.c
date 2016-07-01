//program which accepts an integer value and returns the number of bits whose value is 1 and 0, part2 question h)
#include<stdio.h>
int main()
{
    unsigned int iValue,oValue;
    int CountOnes(unsigned int);
    printf("Please Enter Binary value  : ");
    scanf("%u",&iValue);
    oValue = CountOnes(iValue);
    printf("\nThe Number has \"%d\" 1's and \"%d\" 0's ",oValue,32-oValue);
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
