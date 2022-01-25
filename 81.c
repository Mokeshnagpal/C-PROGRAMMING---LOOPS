#include <stdio.h>
#include <math.h>
int main()
{
    int a=0,s=0,b=0,x=0,m=0;
    printf("Input a number=\n");
    scanf("%d",&a);
    while(a>0)
    {
        b=a%2;
        a=a/2;
        if(b==0&&x==0)
            m++;
        else
            {
                x++;
                s=s*10+b;
            }
    }
    s=s*pow(10,m);
    printf("BINARY EQUIVALENT- %d\n",s);
    a=s,b=0,m=0;
    while(a>0)
    {
        b=a%10;
        a=a/10;
        if(b%2!=0)
            m++;
    }
    if(m%2==0)
        printf("The above number is evil");
    else
        printf("The above number is not evil");
    return 0;
}
