#include <stdio.h>
void happy(int);
int main()
{
    for(int i=1;i<=100;i++)
    {
        happy(i);
    }
}
void happy(int x)
{
    int s=10,z=x,y=0;
    while(s>9)
    {
        s=0;
    while(x>0)
    {
        y=x%10;
        s=s+y*y;
        x=x/10;
    }
    if(s==1)
        {
            printf("%d\n",z);
            break;
        }
    x=s;
    }

}
