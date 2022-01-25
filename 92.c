#include <stdio.h>
int main()
{
    int a=0,m=0,s=0,b=0;
    printf("Input a number=\n");
    scanf("%d",&a);
    while(a>0)
    {
        m=0;
        b=a%10;
        a=a/10;
        for(int j=2;j<b;j++)
            if(b%j==0)
            m++;
        if(m==0)
        s+=b;

    }
    printf("SUM OF PRIME DIGITS =%d",s);
    return 0;
}
