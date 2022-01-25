#include <stdio.h>
int prime(int);
int main()
{
    int x=0,a=0,b=0;
    printf("Enter the lower range=\n");
    scanf("%d",&a);
    printf("Enter the upper range=\n");
    scanf("%d",&b);
    printf("Twin prime are as follows=\n");
    for(int i=a;i<=b;i++)
    {
        if(prime(i)==1&&prime(i+2)==1)
            printf("%d and %d\n",i,i+2);
    }
    return 0;
}
int prime(int p)
{
    int c=0;
    for(int i=2;i<p;i++)
    if(p%i==0)
    c++;
    if(c==0)
        return 1;
    else
        return 0;
}
