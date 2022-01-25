#include <stdio.h>
#include <math.h>
int main()
{
    int a=0,b=0,c=0,d=0,m=0,s=0;
    for(int a=1;a<=1000;a++)
    {
        b=0,c=0,s=0,m=0;
    b=a*a;
    d=a;
    if(b%10==d || b%100==d || b%1000==d)
         printf("\n%d is automorphic",d);
    }
    return 0;
}
