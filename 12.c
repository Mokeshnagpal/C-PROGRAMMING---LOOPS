#include <stdio.h>
int main()
{
    int a=0,b=1,c=0,n=0;
    printf("Input a number=\n");
    scanf("%d",&n);
    printf("\n\n");
    if(n>=2)
        printf("0\n1");
    if(n==1)
        printf("0");
    for(int i=3;i<=n;i++)
    {
        c=a+b;
        printf("\n%d",c);
        a=b;
        b=c;
    }
    return(0);
}
