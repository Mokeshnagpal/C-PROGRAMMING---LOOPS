#include <stdio.h>
int main()
{
    int a=0,b=0,c=0;
    printf("Input a number\n");
    scanf("%d",&a);
    for(int i=1;i<=a/2;i++)
    {
        b=i*(i+1);
        if(b==a)
            c++;
    }
    if(c==1)
        printf("\n%d is pronic",a);
    else
        printf("\n%d is not pronic",a);
    return 0;
}
