#include <stdio.h>
int prime(int);
int main()
{
    int x=0,a=0,y=0,c=0;
    printf("Enter a number=\n");
    scanf("%d",&a);
    for(int i=0;i<=9;i++)
    {
        c=0;
        x=a;
        while(x>0)
        {
            y=x%10;
            x=x/10;
            if(i==y)
                c++;
        }
        if(c>0)
            printf("Frequency of %d is %d\n",i,c);
    }
    return 0;
}
