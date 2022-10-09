//structure to read,write and comute average-marks and students scoring above and below

#include <stdio.h>
#include <stdlib.h>
struct student
{
  char usn[50];
  char name[50];
  int marks;
}s[10];

int main()
{
    int n,i,countav=0,countbv=0;
    float sum,average;
    printf("Enter number of students\n");
    scanf("%d",&n);
    printf("Enter students information\n");
    for(i=0;i<n;i++)
    {
        printf("Enter usn\n");
        scanf("%s",s[i].usn);
        printf("Enter name\n");
        scanf("%s",s[i].name);
        printf("enter marks\n");
        scanf("%d",&s[i].marks);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+s[i].marks;
    }
    average=sum/n;
    printf("The average is %f\n",average);
     for(i=0;i<n;i++)
     {
         if(s[i].marks>=average)
         {
             countav++;
         }
         else{
            countbv++;
         }
     }
     printf("The number of student above average is %d\n",countav);
     printf("The number of student below average is %d\n",countbv);

    return 0;
}
