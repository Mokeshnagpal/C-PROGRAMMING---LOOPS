#include <stdio.h>
int main()
{
    int m=1;
    for(int i=5;i>=1;i--)
    {
        m=m*i;
    }
    printf("\n%d is factorial of 5",m);
    return 0;
}
