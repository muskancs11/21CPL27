//matrix multiplication
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10],b[10][10],c[10][10],n,i,j,k;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements of matrix A:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of matrix B:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           c[i][j]=0;
        for(k=0;k<n;k++)
        {
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
        }
    }
    printf("The product of matrixes is \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
