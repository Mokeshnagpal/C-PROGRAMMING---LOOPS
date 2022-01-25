#include <stdio.h>
#include <math.h>
int main()
{
    double s=0.0;
    int a=0,b=0,c=0;
    printf("Input a number=\n");
    scanf("%d",&a);
    while(a>0)
    {
        b=a%10;
        a=a/10;
        if(b%2==0)
        {
            s=s+pow(10,c)*b;
            c++;
        }
    }
    printf("%0.2lf is the new number",s);
    return 0;
}
