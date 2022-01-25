#include <stdio.h>
int main()
{
    int n=0,k=0,j=0,s=0;
    printf("Input the nth number=\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        s=0;
        k=i*i;
        if(k<10)
            printf("%d\t",k);
        else
        {
        while(k>0)
        {
            j=k%10;
            k=k/10;
            s=s*10+j;
        }
        printf("%d\t",s);
        }
    }
    return 0;
}
