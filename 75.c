#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a=0,b=0,c=0,d=0,e=0;
    printf("Input a number\n");
    scanf("%d",&a);
    b=a*a*a;
    c=printf("%d",b);
    for(int i=1;i<=c;i++)
    {
        d=(int)pow(10,i);
        e=b%d;
        if(e==a)
        {
            printf(" is a trimorphic number");
            exit(0);
        }
    }
    printf(" is not a trimorphic number");
    return 0;
}
