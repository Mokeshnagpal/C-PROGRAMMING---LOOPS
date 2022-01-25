#include <stdio.h>
int main()
{
    int a=0;
    printf("Input a number=\n");
    scanf("%d",&a);
    printf("\n FACTORS OF %d ARE\n",a);
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
            printf("%d\n",i);
    }
    return 0;
}
