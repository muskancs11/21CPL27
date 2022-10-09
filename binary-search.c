//Binary search
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,a[10],mid,low,high,key,found=0;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter array element\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    printf("Enter elements to be searched\n");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            found=1;
            break;
        }
        else if(a[mid]>key)
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(found==1)
    {
        printf("Element found");
    }
    else
    {
        printf("Element not found");
    }

    return 0;
}
