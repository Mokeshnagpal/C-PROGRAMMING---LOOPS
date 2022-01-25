#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a=0,b=0,c=0;
    printf("Input a number=\n");
    scanf("%d",&a);
    c=a;
    printf("\n");
    for(int i=9;i>=0;i--)
    {
        a=c;
        do
        {
            b=a%10;
            a=a/10;
            if(b==i)
            {
                printf("%d is the largest number",i);
                exit(0);
            }
        }
        while(a>0);
    }
    return 0;
}
