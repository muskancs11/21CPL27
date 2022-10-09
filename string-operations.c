//string compare, concatenate, length

#include <stdio.h>
#include <stdlib.h>
void stringlenghth(char a[100],char b[100]);
void stringconcatenate(char a[100],char b[100]);
void stringcompare(char a[100],char b[100]);

void main()
{
    char p [100],q[100];
    printf("Enter the first string\n");
    gets(p);
    printf("Enter the second string\n");
    gets(q);
    stringlenghth(p,q);
    stringconcatenate(p,q);
    stringcompare(p,q);
}
void stringlenghth(char a[100],char b[100])

{
    int len1,len2;
    len1=strlen(a);
    len2=strlen(b);
    printf("The first string length is %d \n and second is %d\n",len1,len2);
}

void stringconcatenate(char a[100],char b[100])
{
    printf("The concatenated string is %s\n",strcat(a,b));
}
void stringcompare(char a[100],char b[100])
{
    if(strcmp(a,b)==0)
    {
        printf("Strings are equal\n");
    }
    else{
        printf("Strings are not equal\n");
    }
}
