#include <stdio.h>
int main()
{
    int a=0,b=0,c=0,h=0,l=0;
    printf("Input a number=\n");
    scanf("%d",&a);
    printf("Input another number=\n");
    scanf("%d",&b);
    c=a*b;
    for(int i=1;i<=c;i++)
        if(a%i==0&&b%i==0)
        h=i;
    l=c/h;
    printf("\nH.C.F.=%d",h);
    printf("\nL.C.M.=%d",l);
    return 0;
}
