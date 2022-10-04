#include<stdio.h>
int hcf(int,int);

int hcf(int a, int b)
{
      if(b==0)
    {
        return a;
    }
    if(a==0)
    {
        return b;
    }

    if(a>b)
    {
        hcf(a%b,b);
    }
    else
    {
        hcf(a,b%a);
    }

}

