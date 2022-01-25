#include <stdio.h>
int prime(int);
int main()
{
    int x=0,n=0;
    printf("Input the value of n =\n");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
       x=prime(i);
       if(x==1)
        printf("\n%d is a prime number",i);
    }
    return 0;
}
int prime(int a)
{
    int m=0;
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
            m++;
    }
    if(m==0)
        return 1;
    else
        return 0;
}
