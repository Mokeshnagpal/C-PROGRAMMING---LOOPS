#include <stdio.h>
int main()
{
    int a=0,m=0;
    printf("Input the value of a =\n");
    scanf("%d",&a);
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
            m++;
    }
    if(m==0)
        printf("\n%d is a prime number",a);
    else
        printf("\n%d is not a prime number",a);
    return 0;
}
