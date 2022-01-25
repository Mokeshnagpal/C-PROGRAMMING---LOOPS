#include <stdlib.h>
#include <stdio.h>
int main()
{
    int a=0,b=0,c=0,s=0,x=0;
    printf("Input a number=\n");
    scanf("%d",&a);
    b=a;
    while(x<20)
    {
    x++;
    while(b>0)
    {
        c=b%10;
        b=b/10;
        s=s*10+c;
    }
    if(s==a)
    {
        printf("Not a lychrel number");
        exit(0);
    }
    b=s+a;
    s=0;
    a=b;
    }
    printf("Given number is lychrel");
    return 0;
}
