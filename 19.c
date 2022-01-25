#include <stdio.h>
int main()
{
    int a=0,se=0,so=0;
    printf("Input the value of a =\n");
    scanf("%d",&a);
    printf("ODD SERIES=\n");
    for(int i=1;i<=a;i++)
    {
        if(i%2!=0)
        printf("%d\n",i);
    }
    printf("EVEN SERIES=\n");
    for(int i=1;i<=a;i++)
    {
        if(i%2==0)
        printf("%d\n",i);
    }
    return 0;
}
