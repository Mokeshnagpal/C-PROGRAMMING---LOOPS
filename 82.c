#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a=0,c=0,b=0,d=0,n=0;
    printf("Input a number=\n");
    scanf("%d",&a);
    b=a;
    while(b>0)
    {
        c++;
        b=b/10;
    }
    int x[c];
    n=c;
    b=a;
    while(b>0)
    {
        n--;
        d=b%10;
        b=b/10;
        x[n]=d;

    }
    while(x[c-1]<=a)
    {
        d=0;
        for(int i=0;i<c;i++)
            d+=x[i];
        for(int i=0;i<c-1;i++)
            x[i]=x[i+1];
        x[c-1]=d;
        if(d==a)
        {
            printf("\n%d is a keith number",a);
            exit(0);
        }
    }
    printf("\n%d is not a keith number",a);
    return 0;
}


