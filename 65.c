#include <stdio.h>
int main()
{
    int a=2,b=1,c=0;
    printf("LUCAS NUMBER=");
    printf("\n%d\n%d\n",a,b);
    for(int i=3;i<=10;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);
    }
    return 0;
}
