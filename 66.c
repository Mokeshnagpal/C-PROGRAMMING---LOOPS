#include <stdio.h>
int main()
{
    double avg=0.0;
    int a=0,b=0,c=0,s=0;
    printf("Input a number=\n");
    scanf("%d",&a);
    while(a>0)
    {
        c++;
        b=a%10;
        a=a/10;
        s=s+b;
    }
    avg=s/c;
    printf("%0.2lf is the average",avg);
    return 0;
}
