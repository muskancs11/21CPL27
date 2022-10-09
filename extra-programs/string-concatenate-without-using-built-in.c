//string concatenate without using built-in function
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[20],b[20],c[20];
    int i,k=0;
    printf("Enter first string\n");
    gets(a);
    printf("Enter second string\n");
    gets(b);
    for(i=0;a[i]!='\0';i++)
    {
        c[i]=a[i];
        k+=1;
    }
    for(i=0;b[i]!='\0';i++)
    {
        c[k]=b[i];
        k+=1;
    }
    c[k]='\0';
    printf("The concatenated string is %s ",c);

    return 0;
}
