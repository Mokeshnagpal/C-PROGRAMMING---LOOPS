#include <stdio.h>
int prime(int);
int main()
{
    int x=0,y=0,a=0;
    printf("Input the value of a =\n");
    scanf("%d",&a);
    x=prime(a+2);
    y=prime(a);
    if(x==1&&y==1)
        printf("\n%d and %d is twin prime",a,a+2);
    else
        printf("\n%d and %d is not twin prime",a,a+2);
    return 0;
}
int prime(int a)
{
    int m=0;
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
            m++;
    }
    if(m==0)
        return 1;
    else
        return 0;
}
