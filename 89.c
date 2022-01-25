#include <stdio.h>
int main()
{
    int n=0,m=0;
    printf("Input a number=\n");
    scanf("%d",&n);
    int s=0,y=0,z=1,x=0;
    printf("Prime tribonacci sequence are=\n");
    for(int i=4;i<=n;i++)
    {
        m=0;
        s=y+z+x;
        x=y;
        y=z;
        z=s;
        for(int j=2;j<s;j++)
            if(s%j==0)
            m++;
        if(m==0)
        printf("%d\n",s);
    }
}
