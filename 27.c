#include <stdio.h>
int main()
{
    int a=0,b=0,s=0,x=0;
    printf("Input a number=\n");
    scanf("%d",&a);
    x=a;
    do
    {
        b=a%10;
        a=a/10;
        s=s+b;
    }
    while(a>0);
    if(x%s==0)
        printf("\n%d is a niven/harshad number",x);
    else
        printf("\n%d is not a niven/harshad number",x);
    return 0;
}
