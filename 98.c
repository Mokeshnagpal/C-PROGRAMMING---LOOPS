#include <stdio.h>
int main()
{
    int a=0,x=0,b=0,p=1,d=0,e=0;
    printf("Enter a number=\n");
    scanf("%d",&a);
    while(a>0)
    {
        b=a%10;
        a=a/10;
        d=a;
        e=d%10;
        if(e%2==0&&a>0)
            p=p*b;
    }
    printf("The product of the successor of even digits is %d",p);
    return 0;
}


