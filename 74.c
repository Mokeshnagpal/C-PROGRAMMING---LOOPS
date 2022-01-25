#include <stdio.h>
#include <stdlib.h>
int main()
{
    int s=0,a=0,b=0,c=0,x=0;
    printf("Input a number=\n");
    scanf("%d",&a);
    b=a;
    for(int i=1;i<=9;i++)
    {
        b=a;
        while(b>0)
        {
            c=b%10;
            b=b/10;
            if(c==i)
               x++;
            if(c==0)
               {
                   printf("Not a unique number");
                   exit(0);
               }
        }
        if(x>1)
        {
                printf("Not a unique number");
                exit(0);
        }
        x=0;
    }
    printf("Unique number");
    return 0;
}
