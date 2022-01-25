#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Input 20 number=\n");
    double x=0.0;
    int s=0,a=0,c=0;
    for(int i=1;i<=20;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            s+=a;
            c++;
        }
    }
        x=s/c;
        printf("Average of %d numbers is %0.2lf",c,x);
        return 0;
}

