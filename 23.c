#include <stdio.h>
#include <math.h>
int main()
{
    int a=0,b=0,i=0,s=0;
    printf("Input a number=\n");
    scanf("%d",&a);
    do
    {
        b=a%10;
        if(b!=0)
        {
            s=b*pow(10,i)+s;
            i++;
        }
        a=a/10;
    }
    while(a>0);
    printf("\nNumber without 0 is = %d",s);
    return 0;
}
