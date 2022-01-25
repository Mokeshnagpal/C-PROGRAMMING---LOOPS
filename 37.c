#include <stdio.h>
int main()
{
    int a=0,m=0;
    printf("Input a number=\n");
    scanf("%d",&a);
    printf("FACTOR OF THE INPUTTED NUMBER WHICH ARE PRIME=\n");
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            m++;
            printf("%d\t",i);
        }
    }
    printf("\nTOTAL NUMBER OF FACTOR ARE %d",m);
}
