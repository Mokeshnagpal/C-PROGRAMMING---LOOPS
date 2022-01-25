#include <stdlib.h>
#include <stdio.h>
int main()
{
    long long int a;
    int b=0,c=0,e=0,s=0,d=0;
    printf("Enter a number=\n");
    scanf("%lld",&a);
    b=printf("%lld",a);
    if(b!=15)
    {
        printf(" is not an IMEI number");
        exit(0);
    }
    while(a>0)
    {
        c++;
        b=a%10;
        a=a/10;
        if(c%2!=0)
        {
            s+=b;
        }
        else
        {
            d=b*2;
            while(d>0)
            {
                e=d%10;
                d=d/10;
                s+=e;
            }
        }
    }
    if(s%10==0)
        printf(" is an IMEI number");
    else
        printf(" is not an IMEI number");
}


