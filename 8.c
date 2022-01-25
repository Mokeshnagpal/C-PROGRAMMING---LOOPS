#include <stdio.h>
int prime(int);
int main()
{
    int x=0,y=0,b=0,a=0,c=0,s=0;
    printf("Input the value of a =\n");
    scanf("%d",&a);
    c=a;
    do
    {
        b=a%10;
        a=a/10;
        s=s*10+b;
    }
    while(a>0);
    x=prime(s);
    y=prime(c);
    if(x==1&&y==1)
        printf("\n%d is twisted prime",c);
    else
        printf("\n%d is not twisted prime",c);
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
