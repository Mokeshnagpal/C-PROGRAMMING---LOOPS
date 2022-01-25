#include <stdio.h>
int main()
{
    int a=0,b=0,c=1,d=0,n=0;
    printf("Input a number=\n");
    scanf("%d",&n);
    printf("\n\n");
    if(n>=3)
        printf("0\n0\n1");
    if(n==1)
        printf("0");
        if(n==2)
            printf("0\n0");
    for(int i=4;i<=n;i++)
    {
        d=a+b+c;
        printf("\n%d",d);
        a=b;
        b=c;
        c=d;
    }
    return(0);
}
