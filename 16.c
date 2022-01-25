#include <stdio.h>
int main()
{
     int a=0,c=0;
     printf("Input a number=\n");
     scanf("%d",&a);
     for(int i=1;i<a;i++)
     {
         if(a%i==0)
            c+=i;
     }
     if(c==a)
        printf("\n%d is a perfect number",a);
     else
        printf("\n%d is not a perfect number",a);
     return 0;
}
