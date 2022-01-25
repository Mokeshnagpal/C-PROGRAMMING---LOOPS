#include <stdio.h>
#include <stdlib.h>
int main()
{
    int s=0;
    for(int i=100;i<=999;i++)
    {
        if(i%5==0)
            s=s+i;
    }
    printf("Sum of all 3 digit number which are multiple of 5 are %d",s);
    return 0;
}
