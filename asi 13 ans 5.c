#include<stdio.h>
int digit_sum(int);

int digit_sum(int n)
{
    int s;
    if(n>0)
    {
        s=n%10;
        n=s+digit_sum(n/10);
        return n;
    }
}
