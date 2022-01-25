#include <stdio.h>
int main()
{
    int a=0,b=0,i=0,s=0;
    printf("Input a number=\n");
    scanf("%d",&a);
    s=a;
    do
    {
        b=a%10;
        if(b==0)
        {
            i++;
        }
        a=a/10;
    }
    while(a>0);
    if(i>0)
    printf("\n%d is a Duck Number",s);
    else
    printf("\n%d is not a Duck Number",s);
    return 0;
}
