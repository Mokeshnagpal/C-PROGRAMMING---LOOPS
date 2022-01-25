#include <stdio.h>
int main()
{
    int a=0;
    printf("Input a number=\n");
    scanf("%d",&a);
    for(int i=1;i<=10;i++)
    {
        printf("\n%d\t*\t%d\t=\t%d",a,i,(a*i));
    }
    return 0;
}
