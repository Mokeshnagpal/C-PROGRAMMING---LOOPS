#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a=0,b=0,s=0,x=0;
    printf("Input a binary number=\n");
    scanf("%d",&a);
    printf("\n");
    do
    {
        b=a%10;
        a=a/10;
        if(b>1)
        {
            printf("WRONG INPUT");
            exit(0);
        }
        s=s+pow(2,x)*b;
        x++;
    }
    while(a>0);
    printf("Decimal equivalent=%d",s);
    return 0;
}
