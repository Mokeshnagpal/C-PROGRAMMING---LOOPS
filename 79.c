#include <stdio.h>
int main()
{
    int n=0,s=0;
    printf("Input nth number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        s+=i;
        printf("Sum of %d natural number=%d",n,s);
    return 0;
}
