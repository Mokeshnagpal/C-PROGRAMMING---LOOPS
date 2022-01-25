#include <stdio.h>
int main()
{
    int a=1,b=2,c=0;
    printf("PELL NUMBER=");
    printf("\n%d\n%d\n",a,b);
    for(int i=3;i<=10;i++)
    {
        c=b*2+a;
        a=b;
        b=c;
        printf("%d\n",c);
    }
    return 0;
}
