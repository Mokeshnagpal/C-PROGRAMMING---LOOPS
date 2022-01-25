#include <stdlib.h>
#include <stdio.h>
int fact(int);
int main()
{
    int a=0;
    printf("Input nth term of sequence=\n");
    scanf("%d",&a);
    if(a<1)
    {
        printf("Wrong input");
        exit(0);
    }
    printf("CATALAN SERIES ARE AS FOLLOWS =\n");
    int z=0;
    for(int i=0;i<=a;i++)
    {
        z=((fact(2*i))/(fact(i)*fact(i+1)));
        printf("%d\t",z);
    }
    return 0;
}
int fact(int x)
{
    int p=1;
    for(int i=1;i<=x;i++)
        p*=i;
    return p;
}
