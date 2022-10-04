#include<stdio.h>
int power(int,int);
int main()
{
    int i,x,y;
    printf("enter a no and its power");
    scanf("%d %d",&x,&y);
    i=power(x,y);
    printf("%d",i);
    return 0;
}

int power(int a,int b)
{

if(b==1)
    {
       return a;
    }
    return a*power(a,b-1);

}



