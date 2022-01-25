#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a=0,b=0,p=1,s=0,x=0;
    printf("Input a number=\n");
    scanf("%d",&a);
    x=a;
    while(a>0)
    {
        b=a%10;
        a=a/10;
        for(int i=2;i<b;i++)
        {
            if(b%i==0)
                {
                    printf("All digits are not prime");
                    exit(0);
                }
        }
    }
    printf("All digits are prime",x);
    return 0;
}
