#include <stdio.h>
#include <math.h>
int main()
{
    int a=0,b=0,m=0,s=0,c=0;
    printf("Input a number\n");
    scanf("%d",&a);
    c=a;
    m=printf("%d",c);
    while(c>0)
    {
        b=c%10;
        c=c/10;
        s=s+pow(b,m);
        m--;
    }
    if(s==a)
    printf(" is disarium",a);
    else
        printf(" is not disarium",a);

}
