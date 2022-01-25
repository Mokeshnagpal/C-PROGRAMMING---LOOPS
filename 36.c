#include <stdio.h>
int main()
{
    int a=0,m=0;
    printf("Input a number=\n");
    scanf("%d",&a);
    printf("FACTOR OF THE INPUTTED NUMBER WHICH ARE PRIME=\n");
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            for(int j=2;j<i;j++)
            {
                if(i%j==0)
                    m++;
            }
            if(m==0)
            printf("%d\t",i);
            m=0;
        }
    }
}
