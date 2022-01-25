#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c=0,s=0,b=0;
    long int a=0l;
    printf("Input the  number=\n");
    scanf("%d",&a);
    b=printf("%d",a);
    if(b>10)
    {
        printf("-Illegal ISBN");
        exit(0);
    }
    while(a>0)
    {
        c=a%10;
        a=a/10;
        s=s+c*b;
        b--;
    }
    if(s%11==0)
        printf("-Legal ISBN");
    else
        printf("-Illegal ISBN");
    return 0;
}
