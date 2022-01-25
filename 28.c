#include <stdio.h>
int main()
{
    int a=0;
    printf("Input a number=\n");
    scanf("%d",&a);
    for(int i=1;i<=10;i++)
    {
        a++;
        printf("%d\t",a);
    }
    return 0;
}
