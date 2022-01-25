#include <stdlib.h>
#include <stdio.h>
int main()
{
    int s=0;
    printf("ABUNDANT NUMBERS ARE AS FOLLOWS -\n");
    for(int j=1;j<=100;j++)
    {
    for(int i=1;i<j;i++)
        if(j%i==0)
            s+=i;
    if(s>j)
        printf("%d\n",j);
        s=0;
    }
    return 0;
}
