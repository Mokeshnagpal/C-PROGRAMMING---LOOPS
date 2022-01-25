#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int l=0,m=0,a=0,b=0,p=0,q=0,x=0,y=0;
    printf("Input a number -\n");
    scanf("%d",&a);
    b=a*a;
    p=b;
    while(p>0)
    {
        l++;
        p=p/10;
    }
    char c[l+1];
    p=b,m=l-1;
    while(p>0)
    {
        q=p%10;
        p=p/10;
        c[m]=(char)(q+48);
        m--;
    }
    c[l]='\0';
    p=0,q=0;
    if(l%2==0)
    {
        x=atoi(&c[l/2]);
        c[l/2]='\0';
        y=atoi(c);
        if(x+y==a)
            printf("Kaprekar number");
        else
            printf("Not Kaprekar number");
    }
    else
    {
        x=atoi(&c[l/2]);
        p=atoi(&c[l/2+1]);
        c[l/2+1]='\0';
        q=atoi(c);
        c[l/2]='\0';
        y=atoi(c);
        if((x+y)==a||(p+q)==a)
            printf("Kaprekar number");
        else
            printf("Not Kaprekar number");
    }
    return 0;
}
