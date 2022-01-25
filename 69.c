#include <stdio.h>
int main()
{
    int a=0,s=0;
    printf("Input a number\n");
    scanf("%d",&a);
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
            s+=i;
    }
    if(s==a)
        printf("%d is a perfect number",a);
    else if(s>a)
        printf("%d is a abundant number",a);
    else
        printf("%d is a deficient number",a);
    return 0;
}
