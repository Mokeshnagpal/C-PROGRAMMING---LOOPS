#include <stdlib.h>
#include <stdio.h>
int main()
{
    int a=0,s=0;
    printf("Input a number=\n");
    scanf("%d",&a);
    for(int i=1;i<a;i++)
        if(a%i==0)
            s+=i;
    if(s>a)
        printf("%d is an abundant number",a);
    else
        printf("%d is not an abundant number",a);
    return 0;
}
