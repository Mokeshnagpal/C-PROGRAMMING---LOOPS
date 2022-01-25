#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a=0,b=0,c=0,d=0,e=0,f=0,h=0,i=0;
    int x[10];
    printf("Input a number=\n");
    scanf("%d",&a);
    b=a*2;
    c=a*3;
    while(c>0)
    {
        d=a%10;
        e=b%10;
        f=c%10;
       x[i]=d;
       i++;
       x[i]=e;
       i++;
       x[i]=f;
       i++;
       a=a/10;
       b=b/10;
       c=c/10;
    }
    if(i>9)
    {
        printf("\nNot a fascinating number");
        exit(0);
    }
    for(i=1;i<=9;i++)
    {
        for(int j=0;j<9;j++)
        if(x[j]==i)
            h++;
        if(h!=1)
        {
            printf("\nNot a fascinating number");
            exit(0);
        }
        h=0;
    }
    printf("Number is fascinating");
    return 0;
}
