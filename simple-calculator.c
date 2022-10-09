//simple calculator
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,result;
    char op;
    printf("Enter operator\n");
    scanf("%c",&op);
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    switch(op)
    {
    case'+':
        result=a+b;
        break;
    case'-':
        result=a-b;
        break;
    case'*':
        result=a*b;
        break;
    case'/':
        if(b!=0){
        result=a/b;
        }
        else{
            printf("Invalid input\n");
        }
        break;
    case'%':
        result=a%b;
        break;
    default:
        printf("Invalid input\n");
        break;
    }
    printf("The result is %d",result);

    return 0;
}
