#include <stdio.h>
int main()
{
    int a=0,s=0;
    printf("Input the value of a =\n");
    scanf("%d",&a);
    do
    {
        a=a/10;
        s++;
    }
    while(a>0);
    printf("\n%d is the number of digits",s);
    return 0;
}
