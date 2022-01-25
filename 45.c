#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a=0,b=0,c=0,n=1,p=1,s=0;
    printf("Input a 5 digit number=\n");
    scanf("%d",&a);
    printf("\n");
    b=printf("%d",a);
    if(b!=5)
    {
        printf(" is not lappy");
        exit(0);
    }
    while(a>0)
    {
        c=a%10;
        a=a/10;
        if(n==1||n==2)
            p=p*c;
        s=s+c;
        n++;
    }
    if(p==32&&s==36)
        printf(" is flappy");
    else
        printf(" is not flappy");
        return 0;
}
