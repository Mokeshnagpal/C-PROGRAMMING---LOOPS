#include <stdio.h>
int main()
{
    int a=0,e=0,n=0,o=0;
    printf("Input n number till you input 0\n");
    do
    {
        scanf("%d",&a);
        if(a>0&&a%2==0)
            e+=a;
        else if(a>0&&a%2!=0)
            o+=a;
        else if(a<0)
            n+=a;
    }
    while(a!=0);
    printf("Sum of even positive number=%d\n",e);
    printf("Sum of odd positive number=%d\n",o);
    printf("Sum of negative number=%d\n",n);
    return 0;
}
