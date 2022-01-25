#include <stdio.h>
#include <stdlib.h>
int prime(int);
int main()
{
    int a=0,b=0,x=0,y=0;
    printf("Input lower boundry=\n");
    scanf("%d",&a);
    printf("Input upper boundry=\n");
    scanf("%d",&b);
    for(int i=a;i<=b-6;i++)
    {
        if(prime(i)==1&&prime(i+6)==1)
            printf("%d and %d are sexy prime numbers\n",i,i+6);
    }
    return 0;
}
int prime(int x)
{
    int n=0;
    for(int i=2;i<x;i++)
        if(x%2==0)
        n=1;
    if(n==1)
        return 0;
    else
        return 1;
}
