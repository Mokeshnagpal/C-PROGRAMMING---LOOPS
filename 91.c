#include <stdio.h>
int main()
{
    int a=0,s=0;
    printf("Input a number=\n");
    scanf("%d",&a);
    while(a>0)
    {
        s=s+(a%10)*(a%10);
        a=a/10;
    }
    printf("SQUARE OF DIGITS =%d",s);
    return 0;
}
