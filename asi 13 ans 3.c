#include<stdio.h>
int even_sum(int);

int even_sum(int n)
{
    int s;
    if(n>0)
    {
        s=n*2;
        n=s+even_sum(n-1);
        return n;
    }
}

