//string length without built-in function
#include <stdio.h>
#include <stdlib.h>

void main()
{
    char a[100];
    int count,i;
    printf("Enter string\n");
    gets(a);
    count=0;
    for(i=0;a[i]!='\0';i++)
    {
        count+=1;
    }
    printf("String length is %d",count);

}
