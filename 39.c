#include <stdio.h>
int main()
{
    int a=0,b=0,c=1,s=0,x=0;
    printf("Input a number\n");
    scanf("%d",&a);
   // b=printf("%d",a);
    do
    {
        x=a%10;
        a=a/10;
        if(c==1||a==0)
            s=s+x;
        c++;
    }
    while(a>0);
    printf("\nSUM OF FIRST AND LAST DIGIT=%d",s);
    return 0;
}
