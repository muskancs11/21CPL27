//Taylor series
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i,j,n;
    float rad ,sum;
    printf("Enter degree\n");
    scanf("%d",&x);
    printf("Enter number of terms\n");
    scanf("%d",&n);
    rad=(x*3.14)/180;
    for(i=1;i<=n;i+=2)
    {
        if((i-1)%4==0)
        {
            sum=(sum+pow(rad,i))/fact(i);
        }
        else
        {
            sum=(sum-pow(rad,i))/fact(i);
        }
    }
    printf("The calculated sin(%d)=%f\n",x,sum);
    printf("The library sin(%d) =%f\n",x,sin(rad));
    return 0;
}
int fact(int m)
{
    int f=1,i;
    for(i=0;i<=m;i++)
    {
        f=f*i;
    }
    return 1;
}
