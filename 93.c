#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int prime(int);
int main()
{
    int x=0,a=0,b=0,c=0,d=0;
    printf("Input a number=\n");
    scanf("%d",&a);
    b=a;
    while(b>0)
    {
        b=b/10;
        d++;
    }
    b=a;
    while(x<=d)
    {
        x++;
    if(prime(b)==1)
    {
        printf("%d is not circular prime",a);
        exit(0);
    }
    b=b/10+(b%10*pow(10,d-1));
    }
    printf("%d is circular prime",a);
}
int prime(int p)
{
    int q=0;
    for(int i=2;i<p;i++)
    {
        if(p%i==0)
            q=1;
    }
    return q;
}
