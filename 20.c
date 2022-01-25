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
        s=s*10+b;
    }
    while(a>0);
    printf("\n%d is a reverse number",s);
    return 0;
}
