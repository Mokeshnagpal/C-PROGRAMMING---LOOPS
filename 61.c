#include <stdio.h>
int main()
{
    int a=0,b=0,x=0,y=0;
    printf("Input 2 numbers simuntaneously=\n");
    scanf("%d",&a);
    scanf("%d",&b);
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
            x=x+i;
    }
    for(int i=1;i<b;i++)
    {
        if(b%i==0)
            y=y+i;
    }
    if(x==b&&y==a)
        printf("Amicable number");
    else
        printf("Not amicable number");
    return 0;
}
