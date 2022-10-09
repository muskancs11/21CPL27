#include<stdio.h>
int fact(int n);
void main()
{
  int n,result; 
  printf("enter number:"); 
  scanf("%d",&n);
  result=fact(n);
  printf("The factorial of a number is: %d",result);
}

int fact(int n)
{
  if(n==0)
    return 1;
  else
    return (n*fact(n-1));
}
