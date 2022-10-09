//string reverse without using built-in function
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[20],b[20];
    int i,k,x;
    printf("Enter the string\n");
    gets(a);
    k=strlen(a);
    for (i=0;a[i]!='\0';i++)
    {
        b[i]=a[k-i-1];
    }
    printf("The reverse string is %s",b);
    return 0;
}
