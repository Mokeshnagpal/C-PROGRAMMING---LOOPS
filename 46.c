#include <stdio.h>
#include <math.h>
int main()
{
    int a=0,b=0,m=0,s=0,x=0;
    printf("Input a number=\n");
    scanf("%d",&a);
    printf("\n");
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
