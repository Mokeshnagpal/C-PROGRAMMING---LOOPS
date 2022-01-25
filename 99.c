#include <stdio.h>
int main()
{
    int a=0,b=0,p=1,s=0;
    printf("Enter a number=\n");
    scanf("%d",&a);
    while(a>0)
    {
        b=a%10;
        a=a/10;
        s+=b;
        p*=b;
    }
    if(p==s)
        printf("It is a sum-product number");
    else
        printf("It is not a sum-product number");
    return 0;
}2
