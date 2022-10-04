#include<stdio.h>
int odd_sum(int);

int odd_sum(int n)
{
    int s;
    if(n>0)
    {
        s=n*2-1;
        n=s+odd_sum(n-1);
        return n;
    }
}
