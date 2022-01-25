#include <stdio.h>
int main()
{
    int a=0,b=0,m=0,s=0,x=0;
    printf("Input a number=\n");
    scanf("%d",&a);
    x=a;
    do
    {
        b=a%10;
        a=a/10;
        s=s*10+b;
    }
    while(a>0);
    for(int i=2;i<x;i++)
    {
        if((x%i)==0)
            m++;
    }
    if(m==0&&s==x)
        printf("\n%d is a prime palindrone number",x);
    else
        printf("\n%d is not a prime palindrone number",x);
    return 0;
}
