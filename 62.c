#include <stdio.h>
int main()
{
    int a=0,b=0;
    for(int i=1;i<=10;i++)
    {
        printf("Input a number=\n");
        scanf("%d",&a);
        if(a>b)
            b=a;
    }
    printf("\nTHE GREATEST NUMBER=%d",b);
    return 0;
}
