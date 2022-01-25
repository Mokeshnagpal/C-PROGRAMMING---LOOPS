#include <stdio.h>
int main()
{
    int a=0,s=0,b=0;
    printf("Input the value of a =\n");
    scanf("%d",&a);
    do
    {
        b=a%10;
        a=a/10;
        s=s+b;
    }
    while(a>0);
    printf("\n%d is the sum of digits",s);
    return 0;
}
