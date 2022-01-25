#include <stdio.h>
#include <stdlib.h>
int prime(int);
int magic(int);
int main()
{
    int m=0,n=0,c=0;
    printf("Input lower limit=\n");
    scanf("%d",&m);
    printf("Input upper limit=\n");
    scanf("%d",&n);
    if(m>n)
    {
        printf("\nINVALID INPUT");
        exit(0);
    }
    printf("ALL MAGIC COMPOSITE  NUMBER ARE LISTED BELOW :\n");
    for(int i=m;i<=n;i++)
    {
        if(prime(i)==1&&magic(i)==1)
        {
            c++;
            if(i==n)
            printf("%d",i);
            else
            printf("%d,",i);
        }
    }
    printf("\nFREQUENCY OF MAGIC COMPOSITE NUMBER = %d",c);
}
int magic(int p)
{
    int q=0,r=0,s=10;
    while(s>9)
    {
        s=0;
    while(p>0)
    {
        q=p%10;
        p=p/10;
        s=s+q;
    }
    if(s==1)
        return 1;
    p=s;
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
        return 1;
    else
        return 0;
}
