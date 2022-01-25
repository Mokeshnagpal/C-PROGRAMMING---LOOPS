#include <stdlib.h>
#include <stdio.h>
int main()
{
    int a=0;
    printf("Input a number=\n");
    scanf("%d",&a);
    if(a==1)
    {
        printf("1 is an ugly number");
        exit(0);
    }
    if(a%2==0||a%3==0||a%5==0)
        printf("%d is an ugly number",a);
    else
        printf("%d is not an ugly number",a);
    return 0;
}
