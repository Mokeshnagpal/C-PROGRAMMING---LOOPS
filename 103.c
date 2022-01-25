#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a=0,n=0,p=1;
    printf("Input a number=\n");
    scanf("%d",&a);
    printf("Input the power=\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        p=p*a;
    }
    if(n==0)
        printf("%d to the power of the %d = 0",a,n);
    else
        printf("%d to the power of the %d = %d",a,n,p);
    return 0;
}
