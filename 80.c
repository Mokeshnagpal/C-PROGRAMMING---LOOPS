#include <stdio.h>
#include <stdlib.h>
int dig(int);
int main()
{
    int s=0,b=0,a=0,i=2,x=0;
    printf("Input a number=\n");
    scanf("%d",&a);
    x=dig(a);
    b=a;
    while(a>1)
    {
    if(a%i==0)
    {
        s=s+dig(i);
        a=a/i;
    }
    else
        i++;
    }
    if(s==x)
        printf("%d is a Smith number\n",b);
    else
        printf("%d is not a Smith number\n",b);
    return 0;
}
int dig(int g)
{
    int f=0,h=0;
    while(g>0)
    {
        h=g%10;
        g=g/10;
        f+=h;
    }
    return f;
}

