#include <stdio.h>
int a(int);
int main()
{
    int x=0,y=0,cn=0,n=0;
    printf("Input a number=\n");
    scanf("%d",&x);
     n=x;
    do
    {
        y=a(x);
        if(y==1)
            cn++;
        x=y;
    }
    while(x>9);
    if(cn==1)
        printf("\n%d is a magic number",n);
        else
            printf("\n%d is not a magic number",n);
    return 0;
}
int a(int d)
{
    int b=0,c=0,s=0;
    b=d;
    do
    {
        c=b%10;
        b=b/10;
        s=c+s;
    }
    while(b>0);
    return s;
}
