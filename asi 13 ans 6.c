#include<stdio.h>
int factorial(int);
int factorial(int n)
{
    int s;
    if(n>1)
    {
        s=n*factorial(n-1);
        return s;
    }
}
