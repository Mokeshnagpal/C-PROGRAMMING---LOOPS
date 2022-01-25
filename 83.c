#include <stdio.h>
int a(int);
int main()
{
    int x=0,y=0,n=0;
    for(int i=1;i<=100;i++)
    {
       x=i;
       do
       {
           y=a(x);
           if(y==1)
           printf("%d\n",i);
           x=y;
       }
       while(x>9);
    }
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
