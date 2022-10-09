//compute the sum,mean and standard deviation
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a[10],*ptr,sum=0,mean,std,sumstd=0;
    int i,n;
    printf("enter number of elements\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    ptr=a;
    for(i=0;i<n;i++)
    {
        sum=sum+*ptr;
        ptr++;
    }
    mean=sum/n;
    ptr=a;
    for(i=0;i<n;i++)
    {
        sumstd=sumstd+pow((*ptr-mean),2);
        ptr++;
    }
    std=sqrt(sumstd);
    printf("sum=%f\n",sum);
    printf("mean=%f\n",mean);
    printf("standard deviation =%f\n",std);
    return 0;
}
