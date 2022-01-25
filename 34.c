#include <stdio.h>
int main()
{
    int m=1,x=0,y=0,z=0;
    printf("Input a number=\n");
    scanf("%d",&x);
    y=x;
    do
    {
        z=x%10;
        x=x/10;
        m=m*z;
    }
    while(x>0);
        printf("\n%d is the product of the digits of the number %d",m,y);
    return 0;
}

