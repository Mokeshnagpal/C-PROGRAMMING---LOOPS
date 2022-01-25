#include <stdio.h>
int main()
{
    int n=0;
    printf("Input a number=\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        printf("%d\n",i*i);
    return 0;
}
