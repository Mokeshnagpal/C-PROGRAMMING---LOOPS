#include <stdio.h>
int main()
{
    int a=0,b=0,p=1,s=0,x=0;
    printf("Input a number=\n");
    scanf("%d",&a);
    x=a;
    while(a>0)
    {
        b=a%10;
        a=a/10;
        s=s+b;
        p=p*b;
    }
    if(s==p)
        printf("%d is a spy number",x);
    else
        printf("%d is not a spy number",x);
    return 0;
}
