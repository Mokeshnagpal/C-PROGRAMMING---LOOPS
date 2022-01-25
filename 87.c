#include <stdio.h>
int main()
{
    int n=0;
    printf("Input a number=\n");
    scanf("%d",&n);
    int s=0,y=0,z=1;
    printf("Odd fibonacci sequence are=\n");
    printf("0\n1\n");
    for(int i=3;i<=n;i++)
    {
        s=y+z;
        y=z;
        z=s;
        if(s%2!=0)
        printf("%d\n",s);
    }
}
