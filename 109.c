#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
    printf("Narcissistic number are as follows -\n");
    int d=0,a=0,b=0,c=0,s=0,x=0;
    do
    {
        a++;
    b=a;
    while(b>0)
    {
        b=b/10;
        c++;
    }
    b=a;
    while(b>0)
    {
        d=b%10;
        b=b/10;
        s=s+(int)pow(d,c);
    }
    if(s==a)
    {
        printf("%d\n",a);
        x++;
    }
    s=0,c=0;
    }
    while(x<=15);
    return 0;
}

