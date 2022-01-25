#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a=0,c=0,x=0,y=0;
    printf("Input 2 digits number=\n");
    scanf("%d",&a);
    c=printf("%d",a);
    if(c!=2)
    {
        printf(" is not a 2 digits number");
        exit(0);
    }
    x=a%10;
    a=a/10;
    y=(a%10)*2;
    if(x==y)
        printf("'s tens digit is twice unit digits");
    else
            printf("'s tens digit is not twice unit digits");
    return 0;
}
