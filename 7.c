#include <stdio.h>
int main()
{
    int c=0,a=0,s=0,b=0;
    printf("Input the value of a =\n");
    scanf("%d",&a);
    c=a;
    do
    {
        b=a%10;
        a=a/10;
        s=s+b;
    }
    while(a>0);
    if(c==s*s)
    printf("\n%d is a neon number",c);
    else
    printf("\n%d is not a neon number",c);
    return 0;
}
