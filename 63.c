#include <stdio.h>
int main()
{
    int a=0,b=0,s=0,x=0;
    printf("Input a number\n");
    scanf("%d",&a);
    x=a;
    while(a>9)
    {
    while(a>0)
    {
        b=a%10;
        a=a/10;
        s=s+b*b;
    }
    a=s;
    s=0;
    }
    if(a==1)
        printf("\n%d is a happy number",x);
    else
        printf("\n%d is not a happy number",x);
    return 0;
}
