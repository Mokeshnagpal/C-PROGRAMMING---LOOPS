#include <stdio.h>
int fact(int);
int main()
{
    int s=0,x=0,y=0,z=0;
    printf("Input a number=\n");
    scanf("%d",&x);
    y=x;
    do
    {
        z=x%10;
        x=x/10;
        s=fact(z)+s;
    }
    while(x>0);
    if(y==s)
        printf("\n%d is special number",y);
    else
        printf("\n%d is not special number",y);
    return 0;
}
int fact(int a)
{
    int m=1;
    for(int i=a;i>=1;i--)
    {
        m=m*i;
    }
    return m;
}
