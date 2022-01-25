#include <stdio.h>
int main()
{
    int a=0,x=1,s=0;
    printf("Input a number=\n");
    scanf("%d",&a);
    while(x<a)
    {
    for(int i=x;i<a;i++)
    {
        s+=i;
        if(s==a)
        {
            for(int j=x;j<=i;j++)
            {
                if(j!=i)
                printf("%d+",j);
                else
                printf("%d",j);
            }
                printf("\n");
        }
    }
    x++;
    s=0;
    }
    return 0;
}
