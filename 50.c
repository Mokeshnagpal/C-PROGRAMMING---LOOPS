#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a=1,b=1,c=0,n=0,d=0,e=2;
    printf("Input a number=\n");
    scanf("%d",&n);
    printf("\n\n");
    if(n<=2)
    {
        printf("%d is in tribonacci series",n);
        exit(0);
    }
    while(c<=n)
    {
        c=a+b+e;
        if(c==n)
        {
        printf("%d is in tribonacci series",n);
        d=1;
        }
        a=b;
        b=e;
        e=c;
    }
    if(d==0)
        printf("%d is not in tribonacci series",n);
    return(0);
}
