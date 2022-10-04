#include<stdio.h>
int sumN(int);

int sumN(int n)
{
    int s;
    if(n>0)
    {
        s=n+sumN(n-1);
        return s;
    }
}
