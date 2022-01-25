#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a=0,b=0,c=0,x=0,z=0,n=0,m=0,s=0;
    printf("Input a octal number=\n");
    scanf("%d",&a);
    printf("\n");
    do
    {
        b=a%10;
        a=a/10;
        s=s+pow(8,n)*b;
        n++;
    }
    while(a>0);
    a=s;
    s=0;
    do
    {
        b=a%2;
        a=a/2;
        s=s*10+b;
        if(b!=1&&x==0)
            m++;
        if(b==1)
            x++;
    }
    while(a>0);
    if(m>0)
        s=s*pow(10,m);
    printf("%d is the binary equivalent",s);
    return 0;
}
