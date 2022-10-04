#include<stdio.h>
int square_sum(int);

int square_sum(int n)
{
    int s;
    if(n>0)
    {
        s=n*n;
        n=s+square_sum(n-1);
        return n;
    }
}

