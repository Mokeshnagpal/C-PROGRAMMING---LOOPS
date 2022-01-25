#include <stdio.h>
int main()
{
    int a=0,b=0,s=0;
    printf("Armstrong number from 1 to 1000 are\n");
    for(int i=1;i<=1000;i++)
    {
        s=0;
        a=i;
        do
        {
            b=a%10;
            a=a/10;
            s=s+b*b*b;
        }
        while(a>0);
        if(s==i)
            printf("%d\n",i);
    }
    return 0;
}
