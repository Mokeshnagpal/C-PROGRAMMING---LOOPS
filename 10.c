#include <stdio.h>
int main()
{
    int a=0,s=0;
    printf("Input 10 values =\n");
    for(int i=1;i<=10;i++)
    {
            scanf("%d",&a);
            s=s+a;
    }
    printf("\nSum of 10 numbers inputted by user =%d",s);
    return 0;
}
