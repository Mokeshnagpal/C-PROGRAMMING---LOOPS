#include <stdio.h>
#include <stdlib.h>
int main()
{
    double s=0.0;
    int a=0,b=0,c=0,x=0;
    printf("Input a number=\n");
    scanf("%d",&a);
    c=a%10;
    while(a>0)
    {
        b=a%10;
        a=a/10;
        if(c!=b)
        {
            printf("All digits are not same");
            exit(0);
        }
    }
    printf("All digits are same");
    return 0;
}
