#include <stdio.h>
int main()
{
    int s=0,m=1,x=0,y=0,z=0;
    printf("Input a number=\n");
    scanf("%d",&x);
    y=x;
    do
    {
        z=x%10;
        x=x/10;
        s=z+s;
        m=m*z;
    }
    while(x>0);
        m=m*s;
    if(y==m)
        printf("\n%d is a very special number",y);
    else
        printf("\n%d is not a very special number",y);
    return 0;
}

