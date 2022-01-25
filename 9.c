#include <stdio.h>
int main()
{
    int a=0,se=0,so=0;
    printf("Input the value of a =\n");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        if(i%2!=0)
        so=so+i;
        else
        se=se+i;
    }
    printf("\nSum of even numbers=%d",se);
    printf("\nSum of odd numbers=%d",so);
    return 0;
}
