#include<stdio.h>
int count_digit(int);
int main()
{
    int ans,digit;
    printf("enter a no. to find how many digits in it");
    scanf("%d",&digit);
    ans=count_digit(digit);
    printf("%d",ans);
}

int count_digit(int n)
{
    int s;
    if(n>0)
    {
        s=count_digit(n/10);
        return s+1;

    }
}
