//string copy without built-in function
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[20],b[20];
    int i;
    printf("Enter string\n");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        b[i]=a[i];
    }
    b[i]='\0';
    printf("The copied string is %s",b);
    return 0;
}
