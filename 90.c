#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x=0,a=0,c=0,b=0,s=0;
    printf("Input a number=\n");
    scanf("%d",&a);
    x=a;
    c=printf("%d",a);
    if(c!=5)
    {
        printf("is not a 5 digit number");
        exit(0);
    }
    while(a>0)
    {
        b=a%10;
        a=a/10;
        s=s*10+b;
    }
    if(x==s)
        printf(" is a palindrome number");
    else
        printf(" is not a palindrome number");
    return 0;
}
